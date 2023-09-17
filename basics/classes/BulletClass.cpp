#include <iostream>
#include <string>
#include <random>

using namespace std;

// Gun game 
// Create a bullet class that holds the bullet pos
// Update the x and y pos of bullet class over X amount of loops for each instance
// Delete the class object instances to cleanup at the end

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

class Bullet {
    Random random;
    public:
        double xPos = 0;
        double yPos = 0;
    
    void updatePos() {
        xPos += random(0,100);
        yPos += random(0,100);
    }
};

int main() {
    // Create a few instances
    Bullet bullet1;
    Bullet bullet2;
    Bullet bullet3;
    int bulletsTotal = 3;
    int loopCount = 100;

    // Update each bullet
    for(int i = 0; i <= loopCount; i++) {
        bullet1.updatePos();
        bullet2.updatePos();
        bullet3.updatePos();
    }

    // No need for cleanup since we do not use the 'new' keyword.
    std::cout << "Bullets: " << std::endl;
    std::cout << "Bullet 1 Position -> X: " << bullet1.xPos << " Y: " << bullet1.yPos << std::endl;
    std::cout << "Bullet 2 Position -> X: " << bullet2.xPos << " Y: " << bullet2.yPos << std::endl;
    std::cout << "Bullet 3 Position -> X: " << bullet3.xPos << " Y: " << bullet3.yPos << std::endl;

    std::cout << "Who has moved the furthest from starting position? " << std::endl;
    int pos1 = bullet1.xPos + bullet1.yPos;
    int pos2 = bullet2.xPos + bullet2.yPos;
    int pos3 = bullet3.xPos + bullet3.yPos;
    if(pos1 > pos2) {
        if(pos1 > pos3) {
            std::cout << "Bullet 1 is the Winner" << std::endl; 
        } else {
            std::cout << "Bullet 2 is the Winner" << std::endl;
        }
    } else if(pos2 > pos3) {
        std::cout << "Bullet 2 is the Winner" << std::endl;
    } else {
        std::cout << "Bullet 3 is the Winner" << std::endl;
    }

    return 0;
}