#ifndef AntGPS_hpp
#define AntGPS_hpp

#include <iostream>

class AntGPS
{
private:
    int currentX;
    int currentY;
    int currentDirection;

public:
    AntGPS();
    AntGPS(int userXCoord, int userYCoord, int userPositiion);
    void setX(int xCoord);
    int getX();
    void setY(int yCoord);
    int getY();
    void setDirection(int direction);
    int getDirection();
};

#endif /* AntGPS_hpp */
