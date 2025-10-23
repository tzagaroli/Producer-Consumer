 #include <iostream>

#include "Semaphore.hpp"

Semaphore::Semaphore(bool initial) : up_(initial)
{
    print_state();
    cv_.notify_all();
}

void Semaphore::raise()
{
    std::lock_guard<std::mutex> lock(mtx_);
    up_ = true;
    print_state();
    cv_.notify_one();
}

void Semaphore::lower()
{
    std::lock_guard<std::mutex> lock(mtx_);
    up_ = false;
    print_state();
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

void Semaphore::print_state()
{
    std::lock_guard<std::mutex> lock(mtx_);
    if (up_)
    {
        std::cout << "Semaphore is UP" << std::endl;
    }
    else
    {
        std::cout << "Semaphore is DOWN" << std::endl;
    }
}