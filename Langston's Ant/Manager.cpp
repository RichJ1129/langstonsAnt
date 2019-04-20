#include "Manager.hpp"

Manager::Manager(AntGPS antIn, Board boardIn, int userSteps)
{
    antComm= antIn;
    boardComm = boardIn;
    numSteps = userSteps;
}

void Manager::setBoard(Board boardIn)
{
    boardComm = boardIn;
}

Board Manager::getBoard()
{
    return boardComm;
}

void Manager::setAnt(AntGPS antIn)
{
    antComm = antIn;
}

AntGPS Manager::getAnt()
{
    return antComm;
}

//Rotates the direction of the ant
void Manager::rotateAnt()
{
    int xCoord = antComm.getX();
    int yCoord = antComm.getY();
    int direction = antComm.getDirection();
    
    if(boardComm.getColor(xCoord, yCoord) == ' ')
    {
        if(direction == 0)
        {
            antComm.setDirection(1);
 
        }
    
        else if(direction == 1)
        {
            antComm.setDirection(2);

        }
    
        else if(direction == 2)
        {
            antComm.setDirection(3);

        }
    
        else if(direction == 3)
        {
            antComm.setDirection(0);
        }
    }
    
    else
    {
        if(direction == 0)
        {
            antComm.setDirection(3);
            
        }
        
        else if(direction == 1)
        {
            antComm.setDirection(0);
            
        }
        
        else if(direction == 2)
        {
            antComm.setDirection(1);
            
        }
        
        else if(direction == 3)
        {
            antComm.setDirection(2);
        }
        
    }
        
}

//Combines functions to move ant forward
void Manager::simulation(int numSteps)
{
    int xCoord = antComm.getX();
    int yCoord = antComm.getY();
    int direction = antComm.getDirection();
    
    for(int i = 0; i < numSteps; i++)
    {
        if(direction == 0)
        {
            antComm.setX(xCoord - 1); //Goes Up
            boardComm.changeColor(xCoord, yCoord);
            collisionDetect();
            rotateAnt(); //Changes Direction
            direction = antComm.getDirection(); //Gets new direction
            xCoord = antComm.getX(); //Sets x coordinate
            printScreen();
        }
        else if(direction == 1)
        {
            antComm.setY(yCoord + 1);
            boardComm.changeColor(xCoord, yCoord);
            collisionDetect();
            rotateAnt();
            direction = antComm.getDirection();
            yCoord = antComm.getY();
            printScreen();
        }
        else if(direction == 2)
        {
            antComm.setX(xCoord + 1);
            boardComm.changeColor(xCoord, yCoord);
            collisionDetect();
            rotateAnt();
            direction = antComm.getDirection();
            xCoord = antComm.getX();
            printScreen();
        }
        else if(direction == 3)
        {
            //rotateAnt();
            //direction = antComm.getDirection();
            antComm.setY(yCoord - 1);
            boardComm.changeColor(xCoord, yCoord);
            //yCoord = antComm.getY();
            collisionDetect();
            //printScreen();
            
            rotateAnt();
            direction = antComm.getDirection();
            //antComm.setY(yCoord - 1);
            //boardComm.changeColor(xCoord, yCoord);
            yCoord = antComm.getY();
            //collisionDetect();
            printScreen();
        }
    }
}

//Moves ant if the ant returns true on board collision
void Manager::collisionDetect()
{
    int xCoord = antComm.getX();
    int yCoord = antComm.getY();
    int direction = antComm.getDirection();
    
    if(boardComm.collision(xCoord, yCoord))
    {
        if(direction == 0)
        {
            xCoord += 2;
            antComm.setX(xCoord);
            antComm.setDirection(2);
        }
        
        else if(direction == 1)
        {
            yCoord -= 2;
            antComm.setY(yCoord);
            antComm.setDirection(3);
        }
        
        else if(direction == 2)
        {
            xCoord -= 2;
            antComm.setX(xCoord);
            antComm.setDirection(0);
 
        }
        
        else if(direction == 3)
        {
            yCoord += 2;
            antComm.setY(yCoord);
            antComm.setDirection(1);

        }
    }
}

//Prints Screen for the board and ant
void Manager::printScreen()
{
    int xCoord = antComm.getX();
    int yCoord = antComm.getY();
    int rowSize = boardComm.getRows();
    int colSize = boardComm.getColumns();
    
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < colSize; j++)
        {
            if(i == xCoord && j == yCoord)
            {
                std::cout << '*';
            }
            
            else
                std::cout << boardComm.getColor(i, j);
        }
        std::cout << std::endl;
    }
}





