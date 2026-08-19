#include "MeleeWeapon.h"
#include <iostream>

MeleeWeapon::MeleeWeapon(std::string name, int damage, int weaponDurability)
    : Weapon(name, WeaponType::MELEE, damage), durability(weaponDurability) {}

int MeleeWeapon::getDurability() const { return durability; }

bool MeleeWeapon::use() {
    if (durability <= 0) {
        std::cout << getName() << " is broken!\n";
        return false;
    }

    durability--;

    std::cout << "Attacked with " << getName() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Durability: " << durability << std::endl;

    return true;
}
