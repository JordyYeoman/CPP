#include <iostream>
#include <cmath>

int main() {
    // calc hypotenuse of triangle
    // c = sqr root of a^2 + b^2
    double h;
    double a;
    double b;

    std::cout << "Enter A value of triangle: ";
    std::cin >> a;

    std::cout << "Enter B value of triangle: ";
    std::cin.ignore();
    std::cin >> b;

    // Calc hypotenuse
    h = sqrt((pow(a, 2))+(pow(b,2)));

    std::cout << "H value of triangle is: " << h << std::endl;

    return 0;
}