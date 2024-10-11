#include "grid.h"

grid::grid(/* args */)
{
    // create the grid using O as the default for the grid and initialize all values
}

grid::~grid()
{
}
char grid::CheckTarget(int xpos, int ypos){
    //error check xpos and y pos
    return board[ypos][xpos];
}

void grid::changeValue(int xPos, int yPos, char nValue){
    //add error check for x pos and y pos
    board[yPos][xPos] = nValue;
    return;
}
void grid::placeShip(int shipType, bool direction, int xpos, int ypos){
    //try{ commented out until catch blocks are added
        char* ShipChar;
        int* size;
        switch (shipType)
        {
        case 0:
            *ShipChar = 'D';
            *size = 2;
            /* code */
            break;
        case 1:
            *ShipChar = 'C';
            *size = 3;
            break;
        case 2:
            *ShipChar = 'S';
            *size = 3;
            break;
        case 3:
            *ShipChar = 'B';
            *size = 4;
            break;
        case 4:
            *ShipChar = 'R';
            *size = 5;
            break;
        
        default://throw input error
            break;
        }

        if (direction){//ship is vertical
            if((ypos + *size) >= 10){
                //throw position error
            }
            else{
                for(int i = 0; i< *size; i++){
                    changeValue(xpos, ypos+i, *ShipChar);
                }
            }
        }
        else if(!direction){//ship is horizontal
            if((xpos + *size) >= 10){
                //throw position error
            }
            else{
                for(int i = 0; i< *size; i++){
                    changeValue(xpos + i, ypos, *ShipChar);
                }
            }
        }

        
        else{
            //throw input error
        }
    
    //} commented out until catch blocks are added
    //catch blocks for input error and position error plus a default one will go here
}