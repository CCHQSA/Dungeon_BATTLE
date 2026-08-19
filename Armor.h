#ifndef ARMOR_H
#define ARMOR_H
#include <string>
#include "Item.h"
#include "ItemType.h"

class Armor : public Item {
    private:
      int defense;
      int durability;
    public:
      Armor(std::string name, int defence, int durability);


      int getDefence() const;
      int getDurability();

      bool defence(int damage);

};


#endif