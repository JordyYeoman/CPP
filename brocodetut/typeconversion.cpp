#include <iostream>

// type conversion is the conversion of one data type to another 
// implicit conversion = automatic
// explicit conversion = preceede value with new data type

int main() {
    std::cout << "Welcome homies \n";

    double x = (int) 3.14;
    // double value of x is only 3 since we type cast as int value first (which can only store whole numbers)
    std::cout << x << std::endl;


    char y = 100;
    // this will implicity cast the char value of '100' to the ascii char value of 100  // https://web.alfredstate.edu/faculty/weimandn/miscellaneous/ascii/ascii_index.html
    // 100 in ascii conversion is the letter 'd'
    std::cout << y;

    // useful type conversion example is when you need to retain the decimal point during integer division
    // eg -> 
    int correct1 = 8;
    int questions1 = 10;
    double score1 = correct1 / questions1 * 100;
    std::cout << "SCORE1: " << score1 << "%" << std::endl; // Answer is 0 since the double value in division is truncated (removed)


    int correct2 = 8;
    int questions2 = 10;
    double score2 = (double) correct2 / questions2 * 100; // Explicity cast the questions as a double value - you only need to explicity cast one of the two int values to retain the decimal points
    std::cout << "SCORE2: " << score2 << "%" << std::endl;

    return 0;
}