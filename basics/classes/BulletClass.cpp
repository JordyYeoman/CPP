#include <iostream>
#include <string>

using namespace std;

class Bullet {
    public:
        double xPos;
        double yPos;
};

class Gun {
    public:
        string name;
};


int main() {
    int bulletInstances = 10;

    for(int i = 0; i <= bulletInstances; i++) {
        Bullet bullet[i];
    }

    std::cout << "Bullets: " << std::endl;


    return 0;
}