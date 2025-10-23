#ifndef SEMAPHORE_HPP
#define SEMAPHORE_HPP

#include <mutex>
#include <condition_variable>

class Semaphore
{
public:
    explicit Semaphore(bool initial = false) : up_(initial) {}

    void raise()
    {
        {
            std::lock_guard<std::mutex> lock(mtx_);
            up_ = true;
        }
        cv_.notify_one();
    }

    void lower()
    {
        {
            std::lock_guard<std::mutex> lock(mtx_);
            up_ = false;
        }
        cv_.notify_one();
    }

    void wait_up()
    {
        std::unique_lock<std::mutex> lock(mtx_);
        cv_.wait(lock, [this]() { return up_; });
    }

    void wait_down()
    {
        std::unique_lock<std::mutex> lock(mtx_);
        cv_.wait(lock, [this]() { return !up_; });
    }

private:
    std::mutex mtx_;
    std::condition_variable cv_;
    bool up_ = false;
};

#endif // SEMAPHORE_HPP
