#include <iostream>

int main () {
    // Common naming convention for constants is to name the variable with all uppercase letters.
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 256;
    const int HEIGHT = 352;
    int radius = 10;
    double circum = 2 * PI * radius;

    std::cout << "Radius: " << radius << "cm" << std::endl;
    std::cout << "Circumference: " << circum << "cm" << std::endl;

    return 0;
}