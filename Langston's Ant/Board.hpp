#ifndef Board_hpp
#define Board_hpp

#include <iostream>

class Board
{
private:
    char **boardArray;
    int numRows;
    int numColumns;
    
public:
    Board();
    Board(int, int );
    void setBoard(char, int, int);
    char **getBoard();
    void setNumRows(int);
    int getRows();
    void setNumColumns(int);
    int getColumns();
    char getColor(int, int);
    void changeColor(int, int);
    bool collision(int, int);
    void deleteBoard();
};

#endif /* Board_hpp */
