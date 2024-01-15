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
    mp["four"] = 4;

    // Get an iterator pointing to the first element in the
    // map
    std::map<std::string, int>::iterator it = mp.begin();

    // Iterate through the map and print the elements
    while (it != mp.end())
    {

        if (it->first == "two")
        {
            std::cout << "Second Key!!\n";
        }

        // Remember this won't log first, because we cannot guarantee the map order as we iterate.
        if (it->first == "one")
        {
            std::cout << "First key!!\n";
        }

        std::cout << "Key: " << it->first
                  << ", Value: " << it->second << std::endl;
        ++it;
    }

    return 0;
}