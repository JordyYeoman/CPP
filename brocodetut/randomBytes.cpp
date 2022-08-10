#include <iostream>

using namespace std;

int main() {
    // Remember that a byte is a group of 8 bits
    int age = 902;
    uint8_t age2 = 120;
    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 4.7;
    double balance = 243568.22;

    // int is 4 bytes
    cout << "sizeof int in bytes is: " << sizeof(int) << endl;
    // -1, -2, -3, ..... -2147483648
    cout << "int min value: " << INT_MIN << endl;
    // 1, 2, 3, ..... 2147483647
    cout << "int max value: " << INT_MAX << endl;


    // uint8_t is 1 byte (so only 8 bits)
    cout << "sizeof uint8_t in bytes is: " << sizeof(uint8_t) << endl;
    // 1, 2, 3, ..... 255
    cout << "int max value: " << UINT8_MAX << endl;

    cout << "sizeof char in bytes is: " << sizeof(char) << endl;
    cout << "sizeof bool in bytes is: " << sizeof(bool) << endl;
    cout << "sizeof float in bytes is: " << sizeof(float) << endl;
    cout << "sizeof double in bytes is: " << sizeof(double) << endl;

    return 0;
}