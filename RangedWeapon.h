#ifndef RANGED_WEAPON_H
#define RANGED_WEAPON_H

#include "Weapon.h"

class RangedWeapon : public Weapon {
private:
    int maxAmmo;
    int currentAmmo;

public:
    RangedWeapon(std::string name, int damage, int weaponMaxAmmo);
    
    void use() override;
    
    int getMaxAmmo() const;
    int getCurrentAmmo() const;

    void reload();
};

#endif
