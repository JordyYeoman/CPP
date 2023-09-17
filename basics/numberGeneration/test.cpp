#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
  string vehiclesList[10] = { "value0", "value1", "value2","value3", "value4", "value5","value6", "value7","value8", "value9" };
  int arraySize = *(&vehiclesList + 1) - vehiclesList;
  //exception handling
  try {
    cout << "\nWriting  array contents to file...";
    //open file for writing
    ofstream fw("testing.txt", std::ofstream::out);
    //check if file was successfully opened for writing
    if (fw.is_open())
    {
      //store array contents to text file
      for (int i = 0; i < arraySize; i++) {
        fw << vehiclesList[i] << "\n";
      }
      fw.close();
    }
    else cout << "Problem with opening file";
  }
  catch (const char* msg) {
    cerr << msg << endl;
  }
  cout << "\nDone!";
  cout << "\nPress any key to exit...";
  getchar();
}