#ifndef HYBRID_WEAPON_H
#define HYBRID_WEAPON_H

#include "Weapon.h"

class HybridWeapon : public Weapon {
private:
    int maxAmmo;
    int currentAmmo;
    int durability;

public:
    HybridWeapon(std::string name, int damage, int weaponMaxAmmo, int weaponDurability);

    int use(int baseDamage = 0) override;

    int getMaxAmmo() const;
    int getCurrentAmmo() const;
    int getDurability() const;

    void reload();
};

#endif 
