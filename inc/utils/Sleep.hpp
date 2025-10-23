#ifndef SLEEP_HPP
#define SLEEP_HPP

#include <chrono>
#include <thread>

namespace utils
{
inline void sleep_ms(std::chrono::milliseconds duration)
{
    std::this_thread::sleep_for(duration);
}
} // namespace utils

#endif // SLEEP_HPP