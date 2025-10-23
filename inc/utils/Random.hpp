#ifndef RANDOM_HPP
#define RANDOM_HPP

#include <random>
#include <thread>

namespace utils
{
inline int random_int(int min, int max)
{
    static thread_local std::mt19937 generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}
} // namespace utils

#endif // RANDOM_HPP