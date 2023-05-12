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

    char gameBoard[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
};