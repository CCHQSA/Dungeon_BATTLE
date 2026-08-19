#include <iostream>
#include "Game.hpp"
#include "Battle.hpp"
#include "EnemyType.hpp"
#include "MeleeWeapon.hpp"
#include "Armor.hpp"
#include "HybridWeapon.hpp"
#include "RangedWeapon.h"

Game::Game() {
}

void Game::startGame() {
    equipItem();
    Battle ratBattle(player, rat);

    if (!ratBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(rat.getType()));
    player.addItem(new MeleeWeapon("Big Sword", 20, 50));

    healPlayer();
    equipItem();
    Battle goblinBattle(player, goblin);

    if (!goblinBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(goblin.getType()));
    healPlayer();
    equipItem();
    Battle orcBattle(player, orc);

    if (!orcBattle.startBattle()) {
        return;
    }
    player.addItem(new Armor("Iron armor", 10, 20));
    giveExp(getEnemyExp(orc.getType()));
    healPlayer();
    equipItem();
    Battle trollBattle(player, troll);

    if (!trollBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(troll.getType()));
    player.addItem(new HybridWeapon("Slayer", 100, 20, 30));
    healPlayer();
    equipItem();
    Battle dragonBattle(player, dragon);

    if (!dragonBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(dragon.getType()));

    std::cout << "\nCongratulations! You completed the dungeon!" << std::endl;
}


void Game::healPlayer() {
    int choice;

    std::cout << "\nPlayer HP: " << player.getHp() << std::endl;
    std::cout << "Do you want to heal?" << std::endl;
    std::cout << "1. Heal 20 HP" << std::endl;
    std::cout << "2. Continue" << std::endl;
    std::cout << "Choose: ";

    std::cin >> choice;

    if (choice == 1) {
        player.heal(20);
        std::cout << "You healed!" << std::endl;
        std::cout << "Player HP: " << player.getHp() << std::endl;
    }
}

void Game::giveExp(int amount){
    std::cout << "Player gained: " << amount << "xp" << std::endl;
    player.gainExp(amount);

    std::cout << "Player lvl: " << player.getLevel() 
              << " | XP: " << player.getExp() << "/" << player.requiredExpForLvl(player.getLevel() + 1) 
              << std::endl;
}

void Game::equipItem() {
    int choice = -1;

    while (choice != 0) {
        if (player.getInventory().empty()) {
            std::cout << "\nInventory is empty!" << std::endl;
            break;
        }

        std::cout << "\n--- Your Inventory ---" << std::endl;
        for (size_t i = 0; i < player.getInventory().size(); i++) {
            std::cout << i + 1 << ". " << player.getInventory()[i]->getName() << std::endl;
        }

        std::cout << "Choose item to equip (or 0 to close inventory): ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "Exiting equipment menu." << std::endl;
            continue;
        }

        if (choice > 0 && choice <= static_cast<int>(player.getInventory().size())) {
            auto* selectedItem = player.getInventory()[choice - 1];

            if (selectedItem != nullptr) {
                if (selectedItem->getType() == ItemType::WEAPON) {
                    player.equipWeapon(choice - 1);
                }
                else if (selectedItem->getType() == ItemType::ARMOR) {
                    player.equipArmor(choice - 1);
                }
                else {
                    std::cout << "You cannot equip this item!" << std::endl;
                }
            }
        }
        else {
            std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }
}


