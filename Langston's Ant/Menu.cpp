#include "Menu.hpp"

//Switch case that returns 1 or 2 depending on the user input
int menu()
{
    int userInput = 0;
    
    std::cout << "1: Start Langston's Ant Simulation" << std::endl;
    std::cout << "2: Quit Program" << std::endl;
    
    userInput = inputValidation();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
                
        case 2:
            return 2;
    }
    
    return 0;

}
