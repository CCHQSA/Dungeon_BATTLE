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

    Battle goblinBattle(player, goblin);

    if (!goblinBattle.startBattle()) {
        return;
    }

    Battle orcBattle(player, orc);

    if (!orcBattle.startBattle()) {
        return;
    }

    Battle trollBattle(player, troll);

    if (!trollBattle.startBattle()) {
        return;
    }

    Battle dragonBattle(player, dragon);

    if (!dragonBattle.startBattle()) {
        return;
    }

    std::cout << "\nCongratulations! You completed the dungeon!" << std::endl;
}