#include <string>
#include <random>
#include <iostream>
#include <fstream>

// Seed for random number generation
std::mt19937 seeded_eng() {
  std::random_device r;
  std::seed_seq seed{r(), r(), r(), r(), r(), r(), r(), r()};
  return std::mt19937(seed);
}

class Random {
  std::mt19937 eng = seeded_eng();
  public:
    auto operator()(int a, int b) {
      std::uniform_int_distribution<int> dist(a, b);
      return dist(eng);
    }
};

void generateAndWrite(std::string fileName) {
  Random rand;
  std::ofstream fileToWrite;
  fileToWrite.open(fileName);
  if (fileToWrite.is_open()) {
    // Generate X amount of numbers to write
    for(int k = 0; k <= 20000; k++) {
      int randNum = rand(250, 2500);
      std::string str = std::to_string(randNum) + ",";
      fileToWrite << str;
    } 
    fileToWrite.close(); 
  } else std::cout << "Unable to open file";
}

int main() {
  int dataSetSize = 500000;
  int dataSets = 10;
  
  // Create 10 dataSets to work with for data manipulation
  for(int l = 0; l < dataSets; l++) {
    std::string dataSetName = "./dataSets/data" + std::to_string(l) + ".txt";
    generateAndWrite(dataSetName);
  }
  std::cout << "Program Donezo" << std::endl;
  
  return 0;
}
