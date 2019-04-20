#include "AntGPS.hpp"

AntGPS::AntGPS()
{
    currentX = 0;
    currentY = 0;
    currentDirection = 0;
}

AntGPS::AntGPS(int userXCoord, int userYCoord, int userPosition)
{
    currentX = userXCoord;
    currentY = userYCoord;
    currentDirection = userPosition;
}

void AntGPS::setX(int xCoord)
{
    currentX = xCoord;
}

int AntGPS::getX()
{
    return currentX;
}

void AntGPS::setY(int yCoord)
{
    currentY = yCoord;
}

int AntGPS::getY()
{
    return currentY;
}

void AntGPS::setDirection(int direction)
{
    currentDirection = direction;
}

int AntGPS::getDirection()
{
    return currentDirection;
}






