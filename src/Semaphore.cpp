#include "Semaphore.hpp"

Semaphore::Semaphore(bool initial) : up_(initial)
{
}

void Semaphore::raise()
{
    std::lock_guard<std::mutex> lock(mtx_);
    up_ = true;
    cv_.notify_one();
}

void Semaphore::lower()
{
    std::lock_guard<std::mutex> lock(mtx_);
    up_ = false;
    cv_.notify_one();
}

void Semaphore::wait_up()
{
    std::unique_lock<std::mutex> lock(mtx_);
    cv_.wait(lock, [this]() { return up_; });
}

void Semaphore::wait_down()
{
    std::unique_lock<std::mutex> lock(mtx_);
    cv_.wait(lock, [this]() { return !up_; });
}
