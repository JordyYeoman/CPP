#include <iostream>

int main() {
    // Take user input for row and columns
    // Print a rectangle to the console using the params input from user
    int rows;
    int columns;

    std::cout << "Enter amount of columns: ";
    std::cin >> columns;
    std::cout << "Enter amount of rows: ";
    std::cin >> rows;
    
    for(int j = 0; j <= rows; j++) {
        for(int i = 0; i <= columns; i++) {
            if(i == 0) {
                std::cout << "|";
                continue;
            }
            if(i == columns) {
                std::cout << "|\n";
                continue;
            }
            // If top or bottom row
            if(j == 0 || j == rows) {
                std::cout << "-";
                continue;
            }
            std::cout << " ";
        }
    }


    return 0;
}