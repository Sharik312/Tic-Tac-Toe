#pragma once
#include <string>
using namespace std;

class Board {
public:
    // Constructors
    Board();

    // Methods
    void draw(int *coordinate,   char character);
    void winCheck(char &winner);

protected:
    char gameBoard[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
};