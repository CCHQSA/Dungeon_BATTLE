#include "MeleeWeapon.h"
#include <iostream>

MeleeWeapon::MeleeWeapon(std::string name, int damage, int weaponDurability)
    : Weapon(name, WeaponType::MELEE, damage), durability(weaponDurability) {}

int MeleeWeapon::getDurability() const { return durability; }

void MeleeWeapon::use() {
    if (durability > 0) {
        durability--;
        std::cout << "Attacked with " << getName()<<std::endl
                  << "Damage: " << getDamage() <<std::endl
                  << "Durability: " << durability << "\n";
    } else {
        std::cout<< getName() << " Broked!\n";
    }
}
