// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("example.csv");
  if (myfile.is_open())
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}

// int main () {
//   string line;
//   ifstream myfile ("example.txt");
//   if (myfile.is_open())
//   {
//     while ( getline (myfile,line) )
//     {
//       cout << line << '\n';
//     }
//     myfile.close();
//   }

//   else cout << "Unable to open file"; 

//   return 0;
// }