#include <iostream>

int main () {
    std::string name;
    std::string description;
    std::string title;
    std::string randomWord;
    
    // Useful string methods
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Name length in chars is: " << name.length() << std::endl;
    // str.length()
    if(name.length() < 12 && name.length() > 0) {
        std::cout << "Your name is valid \n";
    } else {
        std::cout << "Your name is too long \n";
    }

    // str.clear()
    name.clear();
    std::cout << "Your name after clear method is: " << name << std::endl;
    std::cout << "Name var char length is: " << name.length() << std::endl;

    // str.empty()
    if(name.empty()) {
        std::cout << "You need to enter your name" << std::endl;
    }

    // str.append()
    std::cout << "Enter your title: " << std::endl;
    std::cout << "Mr, Mrs, Other" << std::endl;
    std::cin >> title;

    std::cout << "Please enter a quick description about your job \n";
    std::cin.ignore();
    std::getline(std::cin, description);

    randomWord.append(title);
    std::cout << "Appended: " << randomWord << std::endl;
    randomWord.append(" " + description);
    std::cout << "After second append \n" << randomWord << std::endl;

    return 0;
}