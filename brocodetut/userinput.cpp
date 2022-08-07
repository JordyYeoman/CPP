#include <iostream>

// << is the cout operator (insertion operator)
// >> is the cin operator (extraction operator)

int main() {
    std::string name;
    std::string response;
    std::string response2;

    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "Nice to meet you " << name << std::endl;

    if(name == "Jordy") {
        std::cout << "What is your plan today Jordy? ";
        std::cin >> response;
    };

    if(response == "nothing") {
        std::cout << "Well then, stop being a lazy ass and go make progress towards your goals!" << std::endl;
    };
    
    std::cin.ignore(); // The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.
    // What happens if the user inputs a space, you can use the std::getLine() method to extract a string with spaces
    std::cout << "Please enter your first and last name " << std::endl;
    std::getline(std::cin, response2);

    std::cout << "Thank you: " << response2 << ", you have now been targetted for termination." << std::endl;

    return 0;
}