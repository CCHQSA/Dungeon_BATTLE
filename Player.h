#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Weapon.h"

class Player {
private:
    int hp;
    int maxHp;
    int attack;
    int exp;
    int level;
    std::vector<Weapon*> inventory; 
    Weapon* equippedWeapon = nullptr; 

public:
    Player();
    ~Player();

    int attackEnemy();
    void takeDamage(int damage);
    void heal(int amount);
    void gainExp(int amount);
    int requiredExpForLvl(int level);

    void addWeapon(Weapon* weapon);
    void equipWeapon(size_t index); 
    Weapon* getEquippedWeapon() const;

    int getHp() const;
    int getAttack() const;
    int getExp() const;
    int getLevel() const;
};

#endif
