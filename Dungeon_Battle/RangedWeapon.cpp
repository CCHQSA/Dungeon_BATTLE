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

bool RangedWeapon::use() {
    if (currentAmmo > 0) {
        currentAmmo--;
        std::cout << "Attacked with " << getName() <<std::endl
                  << "Damage: " << getDamage() 
                  << "Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
        return true;
    } else {
        std::cout <<getName() << " Mo ammo. Reload needed!\n";
        return false;
    }
}
