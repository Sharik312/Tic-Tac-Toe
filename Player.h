#pragma once
#include <string>
using namespace std;

class Player {
public:
    // Constructors
    Player();
    Player(string name);

    // Methods
    void incrementScore();
    void getScore();
    void setName(string name);
    void getName();

protected:
    string _name;
    int _score;
};