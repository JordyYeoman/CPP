#include <iostream>

int main () {
    std::string name;
    std::string description;
    std::string title;
    std::string randomWord;
    std::string insertSomething;
    std::string email;
    
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
    std::cout << "After second append: " << randomWord << std::endl;

    // str.at(index)
    std::cout << randomWord << std::endl;
    std::cout << "Character at index 2 is: " << randomWord.at(3) << std::endl;

    // str.insert()
    insertSomething = "Hello";
    insertSomething.insert(2, "@");
    std::cout << "This is our new char inside string: " << insertSomething << std::endl;

    std::cout << insertSomething.insert(0, "000") << std::endl;

    // str.find() -> help find chars in a string
    // Check if email contains @ symbol
    std::cout << "Enter your email: ";
    std::cin >> email;
    if(email.find('@') < 0) {
        std::cout << "Email must contain @ symbol" << std::endl;
    } else {
        std::cout << "Email contains @ symbol at char index of: " << email.find('@') << std::endl;
    }

    // str.erase() -> remove a portion of a string using a starting index and ending index
    std::cout << "Removing the first three chars: " << email.erase(0, 3) << std::endl;
    std::cout << "Substring method: " << email.substr(0, 3) << std::endl;

    return 0;
}