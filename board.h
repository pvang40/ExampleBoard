#ifndef _BOARD_H_ 
#define _BOARD_H_ 
#include <vector> 

class board
{

    private: 
    std::vector< std::vector< char > > grid;

    public: 
    void setSize(int, int);
    void fillWith(char);
/*    void assign(char,int,int); 
    char get(int,int); */

};


#endif 
