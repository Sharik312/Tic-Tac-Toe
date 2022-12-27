#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player() {
    _name = "NONAME";
};

Player::Player(string name) {
    _name = name;    
};

void Player::incrementScore() {
    _score += 1;
};

void Player::getScore() {
    cout << _score;
};

void Player::setName(string name) {
    _name = name;
};

void Player::getName() {
    cout << _name;
}
