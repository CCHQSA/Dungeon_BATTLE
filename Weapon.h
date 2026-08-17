#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include "ItemType.h"
#include "WeaponType.h"

class Weapon {
private:
    std::string name;
    WeaponType type;
    int damage;

public:

    Weapon(std::string weaponName, WeaponType weaponType, int weaponDamage);

    virtual ~Weapon() = default;

    virtual void use() = 0;
    std::string getName() const;
    WeaponType getType() const;
    int getDamage() const;
};

#endif 
