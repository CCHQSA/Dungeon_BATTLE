#ifndef RANGED_WEAPON_H
#define RANGED_WEAPON_H

#include "Weapon.hpp"

class RangedWeapon : public Weapon {
private:
    int maxAmmo;
    int currentAmmo;

public:
    RangedWeapon(std::string name, int damage, int weaponMaxAmmo);

    int use(int baseDamage = 0) override;
    
    int getMaxAmmo() const;
    int getCurrentAmmo() const;

    void reload();
};

#endif
