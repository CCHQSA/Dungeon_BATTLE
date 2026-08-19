#include "MeleeWeapon.h"
#include <iostream>

MeleeWeapon::MeleeWeapon(std::string name, int damage, int weaponDurability)
    : Weapon(name, WeaponType::MELEE, damage), durability(weaponDurability) {}

int MeleeWeapon::getDurability() const { return durability; }

int MeleeWeapon::use(int baseDamage) {
    if (durability <= 0) {
        std::cout << getName() << " is broken!\n";
        return 0; 
    }

    durability--;

    int totalDamage = getDamage() + baseDamage;

    std::cout << getName() << " damages: " << totalDamage
              << ". Remaining durability: " << durability << "\n";

    std::cout << "Attacked with " << getName() << std::endl;
    std::cout << "Total Damage: " << totalDamage << std::endl;
    std::cout << "Durability: " << durability << std::endl;

    return totalDamage;
}
