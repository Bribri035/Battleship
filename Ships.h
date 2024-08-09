#include <iostream>
#include <string>

class Ships {
private:
    std::string name;
    int health;
    int damage = 0;
    int xPos;
    int yPos;
    bool vertical;
    bool isalive = true;
    
public:
    Ships(int type, int x, int y, bool direct);
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
    int getDamage();
    void setDamage(int neDam);
    bool increaseDamage(); //auto tell if ship is dead
    bool getAlive();
    void setAlive(bool nealive);

};