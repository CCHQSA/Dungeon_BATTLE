#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "ItemType.hpp"

class Item {
private:
    std::string name;
    ItemType type;

public:
    Item(std::string itemName, ItemType itemType);

    virtual ~Item() = default;

    virtual int use(int baseValue = 0) = 0;

    std::string getName() const;
    ItemType getType() const;
};

#endif
