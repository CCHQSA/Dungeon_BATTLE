#pragma once

#include <string>
#include "Item.h"
#include "ItemType.h"

class Armor : public Item {
private:
    double defense;
    int durability;

public:
    Armor(std::string name, double defense, int durability);

    double getDefense() const;
    double getDurability() const; 

    int use(int incomingDamage = 0) override;
};
