#include "Weapon.h"


Weapon::Weapon(std::string weaponName, WeaponType weaponType, int weaponDamage): Item(weaponName, ItemType::WEAPON), type(weaponType), damage(weaponDamage) {}


WeaponType Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}
