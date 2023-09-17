#include <iostream>

int main() {
    int age;
    int allowedAge = 25;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 25) {
        std::cout << "You are allowed into the pub" << std::endl;
    } else if (age < 0) {
        std::cout << "You aren't even born yet bro!?" << std::endl;
    } else {
        std::cout << "Sorry, you are not old enough to enter" << std::endl;
    }

    return 0;
}