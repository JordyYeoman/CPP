#include <iostream>

int main() {
    char measurementUnit;
    double temp;

    std::cout << "---- TEMPERATURE CONVERTER ----\n";
    std::cout << "'F' for Farenheit\n";
    std::cout << "'C' for Celsius\n";
    std::cout << "Enter the measurement unit you want to convert to: \n";
    std::cin >> measurementUnit;

    std::cout << "Enter the temperature: " << std::endl;
    std::cin >> temp;

    if(measurementUnit == 'F' || measurementUnit == 'f') {
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "degrees Farenheit" << std::endl;
        std::cout << "Or: " << temp << "F for short." << std::endl;
    }
    if(measurementUnit == 'C' || measurementUnit == 'c') {
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << " degrees Celsius" << std::endl;
        std::cout << "Or: " << temp << "C for short." << std::endl;
    }

    std::cout << "-------------------";
    
    return 0;
}