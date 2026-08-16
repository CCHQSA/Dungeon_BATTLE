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
}

int Player::getHp() {
    return hp;
}

int Player::getAttack() {
    return attack;
}