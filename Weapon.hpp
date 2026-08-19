#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include "Item.hpp"
#include "ItemType.hpp"
#include "WeaponType.hpp"

class Weapon : public Item {
private:
    WeaponType type;
    int damage;

public:
    Weapon(std::string weaponName, WeaponType weaponType, int weaponDamage);

    virtual ~Weapon() = default;

    int use(int baseValue = 0) override = 0;
    
    WeaponType getType() const;
    int getDamage() const;
};

#endif 
