#include "board.h" 

Board::Board()//constructor
{ 

} 

void board::setSize(int row,int column)
{
    grid.resize(row);
    for(int i=0; i<grid.size(); i++) 
    { 
        grid[i].resize(column); i++;
    } 
}

void board::fillWith(char value ) 
{
    for(int r=0; r <grid.size(); r++)
    { 
        for(int c=0; c< grid[r].size(); c++)
        { 
            grid[r][c] = value;
        } 
    }
}


void board::assign(char,int,int) 
{

}

char board::get(int,int) 
{ 

}
