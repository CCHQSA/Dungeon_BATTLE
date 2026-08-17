#include "Weapon.h"


Weapon::Weapon(std::string weaponName, WeaponType weaponType, int weaponDamage): name(weaponName), type(weaponType), damage(weaponDamage) {}


std::string Weapon::getName() const
{
  return name;
}

WeaponType Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}
