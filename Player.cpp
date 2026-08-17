#include <iostream>
#include "Player.h"
#include <cmath>

Player::Player() {
    maxHp = 100;
    hp = maxHp;
    attack = 10;
    exp = 0;
    level = 1;
}

void Player::attackEnemy() {

}

void Player::takeDamage(int damage) {
    hp -= damage;

    if (hp < 0) {
        hp = 0;
    }
}

int Player::getHp() const {
    return hp;
}

int Player::getAttack() const {
    return attack;
}

int Player::getExp() const{
    return this->exp;
}
int Player::getLevel() const{
    return this->level;
}

void Player::heal(int amount) {
    hp += amount;

    if (hp > maxHp) {
        hp = maxHp;
    }
}

void Player::gainExp(int amount) {
    exp += amount;

    while (exp >= requiredExpForLvl(level + 1)) {
        level++;

        maxHp += 5;
        hp += 5;
        attack += 1;

        std::cout << "Level up! You are now level "
                  << level << std::endl;
    }
}

int Player::requiredExpForLvl(int level) {
    if (level <= 1) {
        return 0;
    }

    return static_cast<int>(50 * std::pow(2, level - 2));
}