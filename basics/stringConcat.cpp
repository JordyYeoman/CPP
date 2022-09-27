#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

// Global state
int loopTotal = 10;
std::vector<std::string> data{};

int main() {
    std::cout << "Systems Online" << std::endl;

    // run main loop X times, store the return value in an array
    for(int i = 0; i <= loopTotal; i++) {
        int randomNumber = rand();
        std::string randomString = std::to_string(randomNumber) + ",";
        data.push_back(randomString);
    }
    if(data.size() >= 10) {
        std::cout << "Random Number Array: " << data.size() << std::endl;
        for(int j = 0; j < data.size(); j++){
            std::cout << data[j];
            // Below is good to know for arduino -> getting the underlying c_str value
            std::cout << data[j].c_str() << std::endl;
        }
        std::cout << std::endl;
        data = {};
    }
    return 0;
}