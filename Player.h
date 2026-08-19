#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Weapon.h"
#include "Item.h"
#include "Armor.h"

class Player {
private:
    int hp;
    int maxHp;
    int attack;
    int exp;
    int level;
    int armorDefence;
    std::vector<Item*> inventory; 
    Weapon* equippedWeapon = nullptr; 
    Armor* equippedArmor = nullptr;

public:
    Player();
    ~Player();

    int attackEnemy();
    void takeDamage(int damage);
    void heal(int amount);
    void gainExp(int amount);
    int requiredExpForLvl(int level);

    void addItem(Item* item);
    void equipWeapon(size_t index); 
    Weapon* getEquippedWeapon() const;

    void equipArmor(size_t armor);
    Armor* getEquippedArmor() const;

    int getHp() const;
    int getAttack() const;
    int getExp() const;
    int getLevel() const;
    int getArmorDefence() const;
    std::vector<Item*> getInventory() const;
};

#endif
