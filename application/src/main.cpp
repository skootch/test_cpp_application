#include <iostream>

#include <DVID/Math/Arithmetic.h>

int main() {
    int a = 5;
    int b = 10;

    std::cout << "hello!" << std::endl;
    std::cout << "a + b = " << dvid::math::add(a, b) << std::endl;
}