#include <iostream>

std::string getMessage(uint8_t * payload, size_t length); // Function declaration ?? 
void doSomething();

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
    size_t length = sizeof(myPayload)/sizeof(myPayload[0]);
    
    uint8_t offMessageTest[100] = {'[',',','{','"','m','e','s','s','a','g','e','"',':','"','o','f','f','"','}',']'};
    size_t length2 = sizeof(myPayload)/sizeof(myPayload[0]);

    uint8_t onMessageTest[100] = {'[',',','{','"','m','e','s','s','a','g','e','"',':','"','o','n','"','}',']'};
    size_t length3 = sizeof(myPayload)/sizeof(myPayload[0]);
    
    std::cout << "PAYLOAD: " << myPayload << std::endl;
    std::cout << "SIZE OF PAYLOAD: " << sizeof(myPayload) << std::endl;
    std::cout << "SIZE OF PAYLOAD: " << length << std::endl;
    std::cout << "My Age: " << myAge << " My Age2: " << myAge2 << std::endl;

    getMessage(myPayload, length);
    getMessage(offMessageTest, length2);
    getMessage(onMessageTest, length3);

    // Store string value from loop and return
    // TODO - switch out with enums
    std::string str;
    std::string on = "on";
    std::string off = "off";
    // for(int i = 0; i <= 100; i++) {
    //     if(i % 2 == 0) { // If a number is evenly divisible by 2 with no remainder, then it is even
    //         str = getMessage(onMessageTest, length3);
    //     } else {
    //         str = getMessage(offMessageTest, length2);
    //     }
    //     // Respond to message
    //     if(str.compare(on) == 0){
    //         // Turn onboard led on
    //         // digitalWrite(2, HIGH);
    //         std::cout << "Turning on LED \n";
    //     }
    //     if(str.compare(off) == 0) {
    //         // Turn onboard led off
    //         // digitalWrite(2, LOW);
    //         std::cout << "Turning off LED \n";
    //     }
    // }

    // uint8_t highScore = 0;
    // uint8_t * highScorePointer;

    // highScorePointer = &highScore; // pointer = address in memory of highscore
    // // 214 748 364 7
    // *highScorePointer = 423914613465; // Assign the value 423914613465 to the value stored at the address the pointer is pointing towards
    // std::cout << "Highscore: " << highScore << std::endl;

    return 0;
}

// Double quotes are the shortcut syntax for a c-string in C++. 
// If you want to compare a single character (char), you must use single quotes instead.


std::string getMessage(uint8_t * payload, size_t length) {
    std::string message;
    int startOfMsgIndex;

    for(int i = 0; i <= length; i++) {
        if((char)payload[i] == ':' && i != startOfMsgIndex) {
            startOfMsgIndex = i + 2; continue; // Plus 2 since the message is ' :"testMsg" '
        }
        if(i == startOfMsgIndex) {
            if((char)payload[i] == '\"') break;
            message += payload[i];
            startOfMsgIndex += 1;
        }
    }
    std::cout << "FINAL MESSAGE: " << message << std::endl;
    return message;
};