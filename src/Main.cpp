#include <iostream>
#include "utils/ANSI.hpp"
#include "utils/Sleep.hpp"

int main()
{
    std::cout << "Hello, " << std::flush;
    utils::sleep_ms(std::chrono::milliseconds(10000));
    std::cout << "World!" << std::endl;
    return 0;
}
