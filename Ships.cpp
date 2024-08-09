#include "Ships.h"

Ships::Ships(int type, int x, int y, bool direct)//create a ship at given area
{
    switch (type)
    {
    case 0://destroyer size2
        health = 2;
        name = "Destroyer";
        /* code */
        break;
    case 1://cruiser size 3
        health = 3;
        name = "Cruiser";
        break;
    case 2://supmarine size 3
        health = 3;
        name = "Submarine";
        break;
    case 3://battleship size 4
        health = 4;
        name = "Battleship";
        break;
    case 4://carrier size 5
        health = 5;
        name = "Carrier";
        break;
    default://something went wrong, throw error
        break;
    }
    //mark ships position
    xPos = x;
    yPos = y;
    vertical = direct;
}

int Ships::getHealth(){
    return health;
}
void Ships::setHealth(int Heal){
    health = Heal;
}
int Ships::getX(){
    return xPos;
}
void Ships::setX(int newx){
    xPos = newx;
}
int Ships::getY(){
    return yPos;
}
void Ships::setY(int newy){
    yPos = newy;
}
bool Ships::getOrient(){
    return vertical;
}
void Ships::setOrient(bool newor){
    vertical = newor;
}
std::string Ships::getName(){
    return name;
}
void Ships::setName(std::string neName){
    name = neName;
}
int Ships::getDamage(){
    return damage;
}
void Ships::setDamage(int neDam){
    damage = neDam;
}
bool Ships::increaseDamage(){
    damage++;
    if (damage == health){
        isalive = false;
        return false;
    }
    return true;
}
bool Ships::getAlive(){
    return isalive;
}
void Ships::setAlive(bool nealive){
    isalive = nealive;
}