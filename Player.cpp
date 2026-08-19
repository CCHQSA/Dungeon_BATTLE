#include <iostream>
#include "Player.hpp"
#include <cmath>
#include "Weapon.hpp" 
#include "Armor.hpp" 

Player::Player() {
    maxHp = 100;
    hp = maxHp;
    attack = 10;
    exp = 0;
    level = 1;
    equippedWeapon = nullptr;
    equippedArmor = nullptr;
}

Player::~Player() {
    for (Item* item : inventory) {
        delete item;
    }
    inventory.clear();
}

int Player::attackEnemy() {
    int totalDamage = attack;

    if (equippedWeapon != nullptr) {
        if (equippedWeapon->use()) {
            totalDamage += equippedWeapon->getDamage(); 
            std::cout << "Total damage dealt to enemy: " << totalDamage << std::endl;
            return totalDamage;
        } else {
            std::cout << "You couldn't attack with " << equippedWeapon->getName() << "!" << std::endl;
            return 0; 
        }
    } else {
        std::cout << "You attack with bare hands dealing " << totalDamage << " damage!" << std::endl;
        return totalDamage;
    }
}

void Player::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) {
        hp = 0;
    }
}

int Player::getHp() const { return hp; }
int Player::getAttack() const { return attack; }
int Player::getExp() const { return this->exp; }
int Player::getLevel() const { return this->level; }
Weapon* Player::getEquippedWeapon() const { return this->equippedWeapon; }

Armor* Player::getEquippedArmor() const { 
    return this->equippedArmor; 
}

int Player::getArmorDefence() const { return this->armorDefence; }

std::vector<Item *> Player::getInventory() const {
    return this->inventory;
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
        std::cout << "Level up! You are now level " << level << std::endl;
    }
}

int Player::requiredExpForLvl(int level) {
    if (level <= 1) return 0;
    return static_cast<int>(50 * std::pow(2, level - 2));
}

void Player::addItem(Item* item) {
    if (item != nullptr) {
        inventory.push_back(item);
    }
}

void Player::equipWeapon(size_t index) {
    if (index < inventory.size()) {
        Weapon* weapon = dynamic_cast<Weapon*>(inventory[index]);
        if (weapon != nullptr) {
            equippedWeapon = weapon;
            std::cout << "You equipped: " << equippedWeapon->getName() << std::endl;
        } else {
            std::cout << "Selected item is not a weapon!" << std::endl;
        }
    } else {
        std::cout << "Invalid weapon index!" << std::endl;
    }
}

void Player::equipArmor(size_t index) {
    if (index < inventory.size()) {
        Armor* armor = dynamic_cast<Armor*>(inventory[index]);
        if (armor != nullptr) {
            equippedArmor = armor; 
            std::cout << "You equipped: " << equippedArmor->getName() << std::endl;
        } else {
            std::cout << "Selected item is not an armor!" << std::endl;
        }
    } else {
        std::cout << "Invalid armor index!" << std::endl;
    }
}
