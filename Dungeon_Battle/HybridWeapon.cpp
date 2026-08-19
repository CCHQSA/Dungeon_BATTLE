#include "HybridWeapon.h"
#include <iostream>

HybridWeapon::HybridWeapon(std::string name, int damage, int weaponMaxAmmo, int weaponDurability)
    : Weapon(name, WeaponType::HYBRID, damage), maxAmmo(weaponMaxAmmo), currentAmmo(weaponMaxAmmo), durability(weaponDurability) {}

int HybridWeapon::getMaxAmmo() const { return maxAmmo; }
int HybridWeapon::getCurrentAmmo() const { return currentAmmo; }
int HybridWeapon::getDurability() const { return durability; }

void HybridWeapon::reload() {
    currentAmmo = maxAmmo;
    std::cout <<getName() << " reloaded! Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
}

bool HybridWeapon::use() {
    if (currentAmmo > 0) {
        currentAmmo--;
        std::cout << getName() <<std::endl
                  << "Damage dealt: " << getDamage() <<std::endl
                  << "Ammo: " << currentAmmo << "/" << maxAmmo << "\n";
                  return true;
    } 
    else if (durability > 0) {
        durability--;
        std::cout << "Out of ammo! Use Mellee atack: " << getName() <<std::endl
                  << "Damage dealt: " << getDamage() <<std::endl
                  << "Durability: " << durability << "\n";
                  return true;
    } 
    else {
        std::cout << getName() << " is completely empty and broken!\n";
        return false;
    }
}
