#include <iostream>
#include "calc.h"

int main() {
    Calculator calc;
    double result = calc.FuncA();
    std::cout << "Result of FuncA: " << result << std::endl;
    return 0;
}

