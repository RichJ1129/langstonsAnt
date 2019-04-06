//
//  Board.hpp
//  Langston's Ant
//
//  Created by Richard Joseph on 4/5/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <iostream>

class Board
{
private:
    int numRows;
    int numColumns;
    char **boardArray;
    
public:
    Board();
    Board(int,int);
    void displayBoard();
};

#endif /* Board_hpp */
