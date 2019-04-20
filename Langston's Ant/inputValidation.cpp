#include "inputValidation.hpp"

/*Input Validation function to make sure user enters an integer value of either
 Source:learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
 */

int inputValidation()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput == 1 || userInput == 2)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}

int inputBoard()
{
    while (true)
    {
        int userInput;
        std::cin >> userInput;
        
        
        if (userInput >= 3 && userInput <= 150)
        {
            std::cin.ignore(10000, '\n');
            return userInput;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "The input is invalid. Please enter a new value." << std::endl;
        }
    }
}
