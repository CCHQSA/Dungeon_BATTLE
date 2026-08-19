#include "RangedWeapon.h"
#include <iostream>

RangedWeapon::RangedWeapon(std::string name, int damage, int weaponMaxAmmo)
    : Weapon(name, WeaponType::RANGE, damage), maxAmmo(weaponMaxAmmo), currentAmmo(weaponMaxAmmo) {}

int RangedWeapon::getMaxAmmo() const { return maxAmmo; }
int RangedWeapon::getCurrentAmmo() const { return currentAmmo; }

void RangedWeapon::reload() {
    currentAmmo = maxAmmo;
    std::cout << getName() << " Reloaded! Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
}

int RangedWeapon::use(int baseDamage) {
    if (currentAmmo > 0) {
        currentAmmo--;
        int totalDamage = getDamage() + baseDamage;
        std::cout << "Attacked with " << getName() << std::endl
                  << "Damage: " << totalDamage << std::endl
                  << "Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
        return totalDamage;
    } else {
        std::cout << getName() << " No ammo. Automatically reloading instead of attacking!\n";
        reload();
        return 0;
    }
}
