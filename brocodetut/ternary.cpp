#include <iostream>

int main() {
    // ternary operator: ?:
    // condition ? ifTrue : ifFalse

    int result;
    std::cout << "Enter your result: ";
    std::cin >> result;

    result > 50 ? std::cout << "Nice you passed!" << std::endl : std::cout << "Sorry you need to redo the unit" << std::endl;
    return 0;
}