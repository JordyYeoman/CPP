#include <iostream>

void sayMyName(std::string name);

int main() {
    // Call some functions
    sayMyName("Jordy");
    int calcStuff();

    return 0;
}

void sayMyName(std::string name) { // we declare the function before the main function so the compiler knows that it's there.
    std::cout << "Good morning, " << name << std::endl;
}