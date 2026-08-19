#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include "Item.h"
#include "ItemType.h"
#include "WeaponType.h"

class Weapon : public Item {
private:
    WeaponType type;
    int damage;

public:

    Weapon(std::string weaponName, WeaponType weaponType, int weaponDamage);

    virtual ~Weapon() = default;

    bool use() override = 0;
    WeaponType getType() const;
    int getDamage() const;
};

#endif 
