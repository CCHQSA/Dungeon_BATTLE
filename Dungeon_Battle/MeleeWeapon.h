#ifndef MELEE_WEAPON_H
#define MELEE_WEAPON_H

#include "Weapon.h"

class MeleeWeapon : public Weapon {
private:
    int durability;

public:
    MeleeWeapon(std::string name, int damage, int weaponDurability);

    bool use() override;
    
    int getDurability() const;
};

#endif
