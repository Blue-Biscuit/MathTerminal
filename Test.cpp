#include "mterminal/MathTerminal.h"

#include <iostream>

int main() {
    mterminal::Solution s1(1.0);
    mterminal::Solution s2(2.0, mterminal::SolutionType::undefined);

    std::cout << s1.str() << std::endl;
    std::cout << s2.str() << std::endl;
}