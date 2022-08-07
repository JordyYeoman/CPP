#include <iostream>

// :: two colons is known as the scope resolution namespace operator


namespace firstSpace {
    int x = 1;
}

namespace secondSpace {
    int x = 2;
}

int main() {
    using std::cout;
    // safer alternative than declaring std namespace at the top of the file is to
    // just grab the portion of the namespace we want to use to prevent conflicts further down the line
    // EG -> using std::string OR using std::cout
    int x = 0;

    // Now we can use the std:: namespace 'cout' without having to write std::cout
    std::cout << "Local variable x: " << x << " firstSpace x: " << firstSpace::x << " secondSpace x: " << secondSpace::x <<std::endl;
    // Example
    cout << "This also works!";
    return 0;
}