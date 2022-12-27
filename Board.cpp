#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

Board::Board() {

};

void Board::draw(int *coordinate, char character) {
    _Board[coordinate[0]][coordinate[1]] = character;
};

void winCheck(char &winner) {
    if (_Board[1][1] ==  _Board[1][2] && _Board[1][1] ==  _Board[1][3]) {

    };

}                                              
