#include <iostream>
#include "utils/ANSI.hpp"

int main()
{
    std::cout << ansi::blue << ansi::bg_bright_white << "Hello, World!" << ansi::reset << std::endl;
    return 0;
}
