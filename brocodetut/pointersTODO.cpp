#include <iostream>

// std::string getMessage(uint8_t * payload, size_t length); // Function declaration ?? 
void getMessage(uint8_t * payload, size_t length); // Function declaration ?? 

int main() {
    std::cout << "Welcome sir." << std::endl;
    int temp;

    // The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&),
    // known as address-of operator. 
    std::cout << "Memory Address of temp int is: " << &temp << std::endl;

    // The variable that stores the address of another variable 
    // is what in C++ is called a pointer.
    

    // & is the address-of operator, and can be read simply as "address of"
    // * is the dereference operator, and can be read as "value pointed to by"

    // The declaration of pointers follows this syntax:
    // type * name;

    int firstValue, secondValue;
    int * myPointer;

    myPointer = &firstValue; // pointer is assigned to the address in memory of firstValue
    *myPointer = 21; // Assign the value 21 to the value stored at the address the pointer is pointing towards
    myPointer = &secondValue; // We can now reassign my pointer with a new address to point to -> address of secondValue in memory    
    *myPointer = 427; // Asign the value 427 to the value stored at the address the pointer is pointing towards
    std::cout << "Firstvalue: " << firstValue << " secondvalue: " << secondValue << std::endl;


    std::cout << "SIZE OF UNSIGNED INT: " << sizeof(unsigned int) << std::endl;
    std::cout << "SIZE OF UINT8: " << sizeof(uint8_t) << std::endl;

    

    // 1. Create a new int value of your age and then create a pointer to reference the address of your age var.
    int myAge = 127;
    uint8_t myAge2[1000] = {'H',' ','L','O','L',' '};
    uint8_t myPayload[100] = {'[',',','{','"','m','e','s','s','a','g','e','"',':','"','e','a','t','m','y','s','h','o','r','t','s','"','}',']'};
    uint8_t myPayload2[] = {'[',',','d'};
    size_t length = sizeof(myPayload)/sizeof(myPayload[0]);

    std::cout << "PAYLOAD: " << myPayload << std::endl;
    std::cout << "SIZE OF PAYLOAD: " << sizeof(myPayload) << std::endl;
    std::cout << "SIZE OF PAYLOAD: " << length << std::endl;
    std::cout << "My Age: " << myAge << " My Age2: " << myAge2 << std::endl;

    //
    // std::string msg = getMessage(myPayload, length);
    getMessage(myPayload, length);

    // uint8_t highScore = 0;
    // uint8_t * highScorePointer;

    // highScorePointer = &highScore; // pointer = address in memory of highscore
    // // 214 748 364 7
    // *highScorePointer = 423914613465; // Assign the value 423914613465 to the value stored at the address the pointer is pointing towards
    // std::cout << "Highscore: " << highScore << std::endl;

    return 0;
}


void getMessage(uint8_t * payload, size_t length) {
    std::string message;
    std::cout << "PAYLOAD: " << payload << std::endl;

    for(int i = 0; i < length; i++) {
        // std::cout << "ITERATION: " << i;
        // std::cout << (char)payload[i];
        if((char)payload[i] == '\"') {
            std::cout << "QUOTATION FOUND" << std::endl;
        }
        message += payload[i];
    }
    std::cout << "FINAL MESSAGE: " << message << std::endl;
    // return 0; // why return 0 here is accepted?? 
};