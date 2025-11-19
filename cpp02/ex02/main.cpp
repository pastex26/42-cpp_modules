#include <iostream>
#include "Fixed.hpp"

int main() {
    Fixed a(4);
    Fixed b(2.5f);

    std::cout << "===== Opérations arithmétiques =====" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl << std::endl;

    std::cout << "===== Comparaisons =====" << std::endl;
    std::cout << "a < b = " << (a < b) << ", a > b = " << (a > b) << std::endl;
    std::cout << "a <= b = " << (a <= b) << ", a >= b = " << (a >= b) << std::endl;
    std::cout << "a == b = " << (a == b) << ", a != b = " << (a != b) << std::endl << std::endl;

    std::cout << "===== Min / Max =====" << std::endl;
    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl << std::endl;

    std::cout << "===== Incrémentation / Décrémentation =====" << std::endl;
    Fixed x;
    std::cout << "x = " << x << std::endl;
    std::cout << "++x = " << ++x << ", x++ = " << x++ << ", x = " << x << std::endl;
    std::cout << "--x = " << --x << ", x-- = " << x-- << ", x = " << x << std::endl << std::endl;

    std::cout << "===== Valeurs Décimales =====" << std::endl;
    Fixed e(1.1f), f(1.2f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "e + f = " << (e + f) << ", e * f = " << (e * f) << std::endl;

    return 0;
}
