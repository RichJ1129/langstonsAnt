//
//  Board.cpp
//  Langston's Ant
//
//  Created by Richard Joseph on 4/5/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "Board.hpp"


Board::Board(int inRows, int inColumns)
{
    numRows = inRows;
    numColumns = inColumns;
    boardArray = new char *[numRows];
    for (int i = 0; i < numRows; i++)
    {
        boardArray[i] = new char[numColumns];
    }
}

void Board::displayBoard()
{
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numColumns; j++)
        {
            std::cout << boardArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    
    
    
}

