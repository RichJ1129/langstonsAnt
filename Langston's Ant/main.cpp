//
//  main.cpp
//  Langston's Ant
//
//  Created by Richard Joseph on 4/5/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include <iostream>
#include "Board.hpp"

int main()
{
    int boardRows;
    int boardColumns;
    
    std::cout << "Please enter amount of rows: \n";
    std::cin >> boardRows;
    std::cout << "Please enter amount of columns: \n";
    std::cin >> boardColumns;
    
    Board A(boardRows,boardColumns);
    
    A.displayBoard();
    
    
    

    return 0;
}
