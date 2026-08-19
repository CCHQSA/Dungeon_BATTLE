#include "Item.hpp"

Item::Item(std::string itemName, ItemType itemType) : name(itemName), type(itemType) {}

std::string Item::getName() const {
    return name;
}

ItemType Item::getType() const {
    return type;
}
