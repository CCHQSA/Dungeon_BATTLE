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

    if (hp <= 0) {
        hp = 0;
        std::cout << "You died\n";
    } else {
        std::cout << "Your HP: " << hp << '\n';
    }
}

int Player::getHp() {
    return hp;
}

int Player::getAttack() {
    return attack;
}