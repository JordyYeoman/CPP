#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
    MyClass myObj; // new instance of MyClass - created as object

    // Access the attributes and set values
    myObj.myNum = 15;
    myObj.myString = "YoYoWhatsUpDawg";

    // print the values
    std::cout << myObj.myNum << std::endl;
    std::cout << myObj.myString << std::endl;
}