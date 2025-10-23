#ifndef SEMAPHORE_HPP
#define SEMAPHORE_HPP

#include <mutex>
#include <condition_variable>

class Semaphore
{
public:
    explicit Semaphore(bool initial = false);

    void raise();
    void lower();
    void wait_up();
    void wait_down();

private:
    std::mutex mtx_;
    std::condition_variable cv_;
    bool up_ = false;
};

#endif // SEMAPHORE_HPP
