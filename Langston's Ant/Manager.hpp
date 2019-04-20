#ifndef Manager_hpp
#define Manager_hpp

#include <iostream>
#include "Board.hpp"
#include "AntGPS.hpp"

class Manager
{
private:
    AntGPS antComm;
    Board boardComm;
    int numSteps;


public:
    Manager(AntGPS, Board, int steps);
    void setBoard(Board);
    Board getBoard();
    void setAnt(AntGPS);
    AntGPS getAnt();
    void rotateAnt();
    void simulation(int numSteps);
    void collisionDetect();
    void printScreen();
};

#endif /* Manager_hpp */
