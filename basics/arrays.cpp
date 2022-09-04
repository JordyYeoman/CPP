#include <iostream>

int main() {
int arraySize = 3; // Number of elements in the array
int firstPass[3] = {};
int secondPass[3] = {};

if(firstPass[0] == 0) {
    // Create a loop and push elements into the arr
    for(int i = 0; i < arraySize; i++) {
        firstPass[i] = rand() % 100 + 1;
    };  

    // Check the last element in the array has a value NOT 0
    // & Get average and then restore array back to original state
    if(firstPass[arraySize-1] != 0) {
    int sum;
        for(int z = 0; z < sizeof(firstPass)/sizeof(firstPass[0]); z++) {
            sum += firstPass[z];
        }
    int localAvg = sum / arraySize;
    std::cout << "AVERAGE: " << localAvg << std::endl;
    std::fill_n(firstPass, arraySize, 0);
    }
}


// Loop over all of the firstPass elements and print them out
for(int j = 0; j < sizeof(firstPass)/sizeof(firstPass[0]); j++) {
    std::cout << "EL Pass Element: " << firstPass[j] << std::endl;
}

return 0;
}