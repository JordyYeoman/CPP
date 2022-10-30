#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<int> readFile() {
  std::string line;
  std::string fileName;
  std::ifstream myfile;
  std::vector<int> data;

  std::cout << "Enter file name to format: ";
  std::cin >> fileName;

  myfile = std::ifstream (fileName);

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    //   std::cout << line << '\n';
        data.push_back(stoi(line));
    }
    myfile.close();
  } else {
    std::cout << "Unable to open file" << std::endl;
    std::cout << "Check file exist file name: " << fileName << std::endl;
  }

  return data;
}

int main() {
    std::cout << "Systems online and ready sir" << std::endl;
    std::vector<int> x = readFile();
    std::cout << "Send it: " << x << std::endl;




    return 0;
}