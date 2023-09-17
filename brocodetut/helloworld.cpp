#include <iostream>
#include <vector>
#include <string>

using namespace std;

// A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. 
// Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

int main() {
    int x = 0;
    int y = 24;
    int sum = x + y;

    std::cout << sum << std::endl;

    double temp = 16.28;
    double price = 0.28;
    double brainCells = 2.222123;

    // stores a single character
    char firstLetter = 'A';
    char secondLetter = 'B';
    char currency = '$';
    char percentChar = '%';

    // boolean
    bool isPowerOn = false;
    bool isMemorySafe = false;

    std::string firstName = "Tony";
    std::string lastName = "Stark";

    std::cout << firstName + ' ' + lastName << std::endl;
    
    // Printing output of program
    std::cout << "I love Pizza! \n";
    std::cout << "It's really yum!!";
    return 0;
}