#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Stark Sytems online..." << std::endl;

    while(name.empty()) {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Good morning sir, user: " << name << ", logging in." << std::endl;

    do {
        std::cout << "Enter a valid age: ";
        std::cin >> age;
    } while(age < 24);

    return 0;
}