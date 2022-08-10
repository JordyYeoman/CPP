#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double z;
    double h;

    z = std::max(x, y); // Returns the max value of two values
    std::cout << z << std::endl;
    h = std::min(x, y); // Returns the min value of two values
    std::cout << h << std::endl;
    
     // From the cmath library we can use even more math methods
    double k = pow(2,4); // Raise 2 to the power of 4 using the pow() function
    std::cout << k << std::endl;

    double sqrRoot = sqrt(400);
    std::cout << sqrRoot << std::endl;

    double temp = abs(-200); // returns the positive value away from 0 (just remove the negative)
    std::cout << temp << std::endl;

    double o = round(4.931); // Rounds to the nearest whole number - can also use ceil() and floor() to round up or down respectively.
    std::cout << o << std::endl;

    

    return 0;
}