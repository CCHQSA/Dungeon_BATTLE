#ifndef MELEE_WEAPON_H
#define MELEE_WEAPON_H

#include "Weapon.hpp"

class MeleeWeapon : public Weapon {
private:
    int durability;

public:
    MeleeWeapon(std::string name, int damage, int weaponDurability);

    int use(int baseDamage = 0) override;
    
    int getDurability() const;
};

#endif
