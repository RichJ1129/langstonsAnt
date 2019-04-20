#include "Board.hpp"

Board::Board()
{
    numRows = 0;
    numColumns = 0;
    boardArray = nullptr;
}

//Class Constructor
Board::Board(int inputRows, int inputColumns)
{
    numRows = inputRows;
    numColumns = inputColumns;
    
    boardArray = new char *[numRows];
    
    for (int i = 0; i < numRows; i++)
    {
        boardArray[i] = new char[numColumns];
    }
    
    for (int i = 0; i < numRows ; i++)
    {
        for (int j = 0; j < numColumns; j++)
        {
            boardArray[i][j] = ' ';
        }
    }
}

void Board::setBoard(char ant, int rowNum, int columnNum)
{
    boardArray[rowNum][columnNum] = ant;
}

char **Board::getBoard()
{
    return boardArray;
}

void Board::setNumRows(int rows)
{
    numRows = rows;
}

int Board::getRows()
{
    return numRows;
}

void Board::setNumColumns(int columns)
{
    numColumns = columns;
}

int Board::getColumns()
{
    return numColumns;
}

char Board::getColor(int x, int y)
{
    char color = boardArray[x][y];
    
    if(color != ' ' && color != '#')
    {
        return ' ';
    }
    
    return color;
}

//Function that changes color
void Board::changeColor(int x, int y)
{
    char color = getColor(x, y);
    
    if (color == ' ')
    {
        boardArray[x][y] = '#';
    }
    
    else
    {
        boardArray[x][y] = ' ';
    }
}

//Function that returns true if the ant coordinate is about to collide with the board
bool Board::collision(int x, int y) //stackoverflow.com/questions/29808883/how-to-check-if-a-2d-array-is-out-of-bounds
{
    if (x < 0)
    {
        return true;
    }
    
    if (y < 0)
    {
        return true;
    }
    
    if (x > numRows - 1)
    {
        return true;
    }
    
    if (y > numColumns - 1)
    {
        return true;
    }
    
    return false;
}

void Board::deleteBoard()
{
    for(int i = 0; i < numRows; i++)
    {
        delete [] boardArray[i];
    }
    delete [] boardArray;
}

