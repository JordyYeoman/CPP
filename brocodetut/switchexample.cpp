#include <iostream>

int main() {
    std::cout << "Welcome sir" << std::endl;
    // A great alternative to many if/else statements is the cheeky switch statement

    int month;
    std::cout << "Enter the month: ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "January broski, start of the year!" << std::endl;
            break;
        case 2:
            std::cout << "February broski, start of the second month!" << std::endl;
            break;
        default:
            std::cout << "[ERROR] Invalid Month, try again!" << std::endl;
    }

    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Nice! MIT here we come!" << std::endl;
            break;
        case 'B':
            std::cout << "Ricky Bobby: 'If you ain't first, you're last." << std::endl;
            break;
        case 'C':
            std::cout << "Mmmmm we should have another go!" << std::endl;
            break;
        case 'D':
            std::cout << "Reeeeeee!" << std::endl;
            break;
        case 'F':
            std::cout << "Man, you even open your eyes in class?" << std::endl;
            break;
        default:
            std::cout << "Yo, you didn't recieve a grade? Go speak to the teacher plz." << std::endl;
    }

    return 0;
}