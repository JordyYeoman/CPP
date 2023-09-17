#include <iostream>
#include <vector>

// typedef is a reserved keyword to create an additional name (alias) for an existing type.
// typedef helps with readability and reduces typos when using complicated data types
// often 'typedef' is now replaced with 'using' keyword as it is better suited to work with 'templates'

// typedef alias usually includes '_t' after the name of the typedef alias so it is easy to identify that it is a typedef
typedef std::vector<std::pair<std::string, int> > pairlist_t;
typedef std::string text_t;
typedef int number_t;
using nText_t = std::string;
using num_t = int;

int main () {

    text_t firstName = "Jordy";
    text_t lastName = "Yeoman";
    nText_t dog = "Layla";
    num_t dogAge = 5;

    std::vector<std::pair<std::string, int> > pairlist0;
    // is the same as this: 
    pairlist_t pairlist1;

    std::cout << firstName << " " << lastName << std::endl;
}