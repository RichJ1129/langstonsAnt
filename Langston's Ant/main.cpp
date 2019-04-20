/*********************************************************************
 ** Program name:matrixCalculator
 ** Author: Richard Joseph
 ** Date: 4/15/19
 ** Description: Function is called asking for user input to start program or
                 end program. The user is asked for rows and columns of board
                 to construct. User is asked to input ants placement and direction
                 alongside number of iterations. Langston's ant program starts and
                 iterates.
 *********************************************************************/

#include <iostream>
#include "Manager.hpp"
#include "Menu.hpp"

int main()
{
    int user = menu();
    
    while(user == 1)
    {
        int boardRows;
        int boardColumns;
        int xPlace;
        int yPlace;
        int direction;
        int numSteps;
        
        std::cout << "Please enter the amount of rows for the board (Less than or equal 150, greater than 3):" << std::endl;
        boardRows =  inputBoard();
        
        std::cout << "Please enter the amount of columns for the board(Less than or equal 150, greater than 3):" << std::endl;
        boardColumns = inputBoard();
        
        std::cout << "Please enter the X placement of the ant:" << std::endl;
        std::cin >> xPlace;
        while(xPlace > boardRows || xPlace < 0)
        {
            std::cout << "Please enter a value within the Board" << std::endl;
            std::cin >> xPlace;
        }
        
        std::cout << "Please enter the Y placement of the ant:" << std::endl;
        std::cin >> yPlace;
        while(yPlace > boardColumns || yPlace < 0)
        {
            std::cout << "Please enter a value within the Board" << std::endl;
            std::cin >> yPlace;
        }
        
        std::cout << "Tip: 0 = Up" << std::endl;
        std::cout << "Tip: 1 = Right" << std::endl;
        std::cout << "Tip: 2 = Down" << std::endl;
        std::cout << "Tip: 3 = Left" << std::endl;
        std::cout << "Please enter the starting direction of the ant:" << std::endl;
        std::cin >> direction;
        while(direction > 3 || direction < 0)
        {
            std::cout << "Please enter a valid direction" << std::endl;
            std::cin >> direction;
        }
        
        std::cout << "Please enter the number of iterations for the simulation" << std::endl;
        std::cin >> numSteps;
        
        Board simulation(boardRows, boardColumns);
        AntGPS ant(xPlace, yPlace, direction);
        Manager start(ant, simulation, 0);
        start.simulation(numSteps);
        simulation.deleteBoard();

        user = menu();
    }

    return 0;
}
