#include <iostream>
#include <map>
#include <string>

int main()
{
    // Create a map of strings to integers
    std::map<std::string, int> mp;

    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // Get an iterator pointing to the first element in the
    // map
    std::map<std::string, int>::iterator it = mp.begin();

    // Iterate through the map and print the elements
    while (it != mp.end())
    {
        std::cout << "Key: " << it->first
                  << ", Value: " << it->second << std::endl;
        ++it;
    }

    return 0;
}