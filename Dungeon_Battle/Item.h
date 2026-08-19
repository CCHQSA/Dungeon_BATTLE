#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "ItemType.h"

class Item {
private:
    std::string name;
    ItemType type;

public:
    Item(std::string itemName, ItemType itemType);

    virtual ~Item() = default;

    virtual bool use() = 0;

    std::string getName() const;
    ItemType getType() const;
};

#endif
