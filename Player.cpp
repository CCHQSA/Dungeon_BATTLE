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

Player::~Player() {
    for (Weapon* weapon : inventory) {
        delete weapon;
    }
    inventory.clear();
}

int Player::attackEnemy() {
    int totalDamage = attack;

    if (equippedWeapon != nullptr) {
        totalDamage += equippedWeapon->getDamage();
        std::cout << "You attack with " << equippedWeapon->getName() 
                  << " dealing " << totalDamage << " damage!" << std::endl;
    } else {
        std::cout << "You attack with bare hands dealing " << totalDamage << " damage!" << std::endl;
    }

    return totalDamage;
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

int Player::getExp() const {
    return this->exp;
}

int Player::getLevel() const {
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


void Player::addWeapon(Weapon* weapon) {
    if (weapon != nullptr) {
        inventory.push_back(weapon);
    }
}

void Player::equipWeapon(size_t index) {
    if (index < inventory.size()) {
        equippedWeapon = inventory[index];
        std::cout << "You equipped: " << equippedWeapon->getName() << std::endl;
    } else {
        std::cout << "Invalid weapon index!" << std::endl;
    }
}

