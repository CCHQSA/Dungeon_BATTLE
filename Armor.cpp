#include <iostream>
#include <string>
#include "Armor.h"
#include <iomanip>
#include <cmath>

Armor::Armor(std::string name, double defense, int durability) 
    : Item(name, ItemType::ARMOR), defense(1.0 - (defense / 100.0)), durability(durability) {}

double Armor::getDefense() const { return defense; }
double Armor::getDurability() const { return durability; }

int Armor::use(int incomingDamage) {
    if (durability <= 0) {
        std::cout << getName() << " is broken and offers no protection!\n";
        return incomingDamage; 
    }

    int finalDamage = static_cast<int>(std::round(incomingDamage * defense));

    int absorbedDamage = incomingDamage - finalDamage;
    if (absorbedDamage <= 0) absorbedDamage = 1;
    
    durability -= absorbedDamage;
    if (durability < 0) durability = 0;

    std::cout << getName() << " absorbs " << absorbedDamage << " damage. "
              << "Remaining durability: " << durability << "\n";
              
    return finalDamage;
}
