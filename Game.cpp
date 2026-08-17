#include <iostream>
#include "Game.h"
#include "Battle.h"

Game::Game() {
}

void Game::startGame() {

    Battle ratBattle(player, rat);

    if (!ratBattle.startBattle()) {
        return;
    }

    healPlayer();

    Battle goblinBattle(player, goblin);

    if (!goblinBattle.startBattle()) {
        return;
    }

    healPlayer();

    Battle orcBattle(player, orc);

    if (!orcBattle.startBattle()) {
        return;
    }

    healPlayer();

    Battle trollBattle(player, troll);

    if (!trollBattle.startBattle()) {
        return;
    }

    healPlayer();

    Battle dragonBattle(player, dragon);

    if (!dragonBattle.startBattle()) {
        return;
    }

    healPlayer();

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