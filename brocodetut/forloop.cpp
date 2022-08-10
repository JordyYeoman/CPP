#include <iostream>

int main() {
    int loopAmount;

    std::cout << "Enter loop amount: ";
    std::cin >> loopAmount;

    for(int i = 0; i < loopAmount; i++) {
        if(i > 5 && i < 10) continue;
        if(i == 99) break;
        std::cout << "Loop: " << i << std::endl;
    }
}