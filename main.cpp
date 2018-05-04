#include <iostream> 
#include "board.h"

using namespace std; 

int main()
{ 
    board ticTacToe; 

    ticTacToe.setSize(3, 3); 
    ticTacToe.fillWith('X'); 

    
    return 0; 
} 
