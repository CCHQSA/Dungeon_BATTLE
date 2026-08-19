#include "HybridWeapon.hpp"
#include <iostream>

HybridWeapon::HybridWeapon(std::string name, int damage, int weaponMaxAmmo, int weaponDurability)
    : Weapon(name, WeaponType::HYBRID, damage), maxAmmo(weaponMaxAmmo), currentAmmo(weaponMaxAmmo),
      durability(weaponDurability) {
}

int HybridWeapon::getMaxAmmo() const { return maxAmmo; }
int HybridWeapon::getCurrentAmmo() const { return currentAmmo; }
int HybridWeapon::getDurability() const { return durability; }

void HybridWeapon::reload() {
    currentAmmo = maxAmmo;
    std::cout << getName() << " reloaded! Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
}

int HybridWeapon::use(int baseDamage) {
    int totalDamage = getDamage() + baseDamage;
    int mode;

    std::cout << "Pick mode:" <<std::endl
            << "Ranged 1:" << std::endl
            << "Melee 2:" << std::endl;
    std::cin >> mode;

    if (mode == 1) {
        if (currentAmmo > 0) {
            currentAmmo--;
            std::cout << getName() << std::endl
                    << "Ranged damage dealt: " << totalDamage << std::endl
                    << "Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
            return totalDamage;
        }
    } else if (mode == 2) {
        if (durability > 0) {
            durability--;
            std::cout << "Out of ammo! Use Melee attack: " << getName() << std::endl
                    << "Melee damage dealt: " << totalDamage << std::endl
                    << "Durability: " << durability << "\n";
            return totalDamage;
        }
    } else {
        std::cout << getName() << " is completely empty and broken!\n";
        return 0;
    }
}
