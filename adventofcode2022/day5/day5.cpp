// --- Day 5: Supply Stacks 35mins ---
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Systems online and ready sir" << std::endl;

    // open the file
    ifstream file("input.txt");
    // check if the file was opened successfully
    if (!file.is_open())
    {
        cerr << "Failed to open file!" << endl;
        return 1;
    }
    // read the file line by line
    string line;
    int loop = 0;
    bool inputCollected = false;
    char stacks[9][35] = {};

    while (getline(file, line))
    {
        if (!inputCollected)
        {
            // Get length of line
            int l = line.length();
            // copying the contents of the
            // string to char array
            strcpy(stacks[loop], line.c_str());
            loop++;
        }

        // Get all input up to empty line
        if (line.empty())
        {
            cout << "End of input" << endl;
            cout << "Starting number stream" << endl;
            inputCollected = true;
        }

        // Part 1
        if (inputCollected)
        {
            cout << stacks << endl;
            cout << line << endl;
        }
    }

    // Get starting layout by waiting for empty line

    // close the file
    file.close();
    return 0;
}