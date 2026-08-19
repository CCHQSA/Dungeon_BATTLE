#include<iostream>
#include <string>
#include "Armor.h"

Armor::Armor(std::string name, int defence, int durability) : Item(name, ItemType::ARMOR){};