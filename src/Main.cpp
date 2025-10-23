#include <iostream>
#include "utils/ANSI.hpp"
#include "utils/Sleep.hpp"
#include "utils/Random.hpp"

int main()
{
    std::cout << "Hello, " << std::flush;
    utils::sleep_ms(std::chrono::milliseconds(1000));
    std::cout << "World!" << std::endl;
    std::cout << "Random: " << utils::random_int(1, 1000) << std::endl;
    return 0;
}
