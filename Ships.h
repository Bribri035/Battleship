#include <iostream>
#include <string>

class Ships {
private:
    std::string name;
    int health;
    int xPos;
    int yPos;
    bool vertical;
    
public:
    Ships Ships();
    Ships Ships(int type);
    int getHealth();
    void setHealth(int Heal);
    int getX();
    void setX(int newx);
    int getY();
    void setY(int newy);
    bool getOrient();
    void setOrient(bool newor);
    std::string getName();
    void setName(std::string neName);
};