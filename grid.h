#include <iostream>

class grid
{
private:
    /* data */
    char board[10][10];
     
public:
    grid(/* args */);//choose which type to do, attack board or my board
    ~grid();
    void placeShip(int shipType, bool direction, int xpos, int ypos);
    char CheckTarget(int xpos, int ypos);
    void changeValue(int xPos, int yPos, char nValue);
};


