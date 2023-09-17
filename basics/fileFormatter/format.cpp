#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string removeWhiteSpace(std::string s) {
    // using the erase, remove_if, bind, and std::isspace functions
    s.erase(std::remove_if(s.begin(), s.end(), std::bind(std::isspace<char>, std::placeholders::_1, std::locale::classic())),s.end());
    return s;
}

void readAndWriteFile() {
  std::string line;
  std::string inputFileName;
  std::string outputFileName;
  std::ofstream outputFile;
  std::ifstream inputFile;
  int count = 0;
  int loopSize = 500;

  std::cout << "Enter file name to format: ";
  std::cin >> inputFileName;
  std::cout << "Enter output file name: ";
  std::cin >> outputFileName;

  inputFile = std::ifstream (inputFileName);
  outputFile = std::ofstream(outputFileName);

  if (inputFile.is_open())
  {
    std::string str;
    while ( getline (inputFile,line, '\n') )
    {   
        if(outputFile.is_open()){
            if(count == loopSize) {
                outputFile << str << "\n";
                str.clear();
                count = 0;
            } else {
                str.append(removeWhiteSpace(line.c_str()) + ',');
                count++;
            }
        }
    }
    inputFile.close();
    outputFile.close();
  } else {
    std::cout << "Unable to open file" << std::endl;
    std::cout << "Check file exist, file name: " << inputFileName << std::endl;
  }
}

int main() {
    std::cout << "Systems online and ready sir" << std::endl;
    readAndWriteFile();




    return 0;
}