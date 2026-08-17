#include <iostream>
#include "Player.h"

Player::Player() {
    hp = 100;
    attack = 10;
}

void Player::attackEnemy() {

}

void Player::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0)
    {
        hp = 0;
    }
    
}

int Player::getHp() const{
    return hp;
}

int Player::getAttack() const{
    return attack;
}