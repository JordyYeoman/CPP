# include <iostream>

int main() {
    std::string bikiniBottom[] = {"Spongebob", "Sandy", "Squidward", "Mr Krabs", "Sandy"};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    // Loop over all of the grades and print them out
    for(int j = 0; j < sizeof(grades)/sizeof(char); j++) {
        std::cout << "You recieved a grade of: " << grades[j] << std::endl;
    }

    // Loop over all of the bikini bottom characters and print their name
    for(int i = 0; i < sizeof(bikiniBottom)/sizeof(std::string); i++) {
        std::cout << bikiniBottom[i] << " has entered the building, oh yeah! \n";
    }

    // Use the foreach method to iterate over all of the characters
    // foreach(datatype iterationVarName : iterableDataTypeVar){}
    for(std::string character: bikiniBottom) {
        std::cout << "Character name: " << character << std::endl;
    }

    return 0;
}

// sizeof() will give you the total size in bytes
// A compile-time operator that determines the size, in bytes, of a variable or data type.