#include <iostream>
#include "Game.h"
#include "Battle.h"
#include "EnemyType.h"

Game::Game() {
}

void Game::startGame() {

    Battle ratBattle(player, rat);

    if (!ratBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(rat.getType()));
    healPlayer();
    

    Battle goblinBattle(player, goblin);

    if (!goblinBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(goblin.getType()));
    healPlayer();
    
    Battle orcBattle(player, orc);

    if (!orcBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(orc.getType()));
    healPlayer();

    Battle trollBattle(player, troll);

    if (!trollBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(troll.getType()));
    healPlayer();
    
    Battle dragonBattle(player, dragon);

    if (!dragonBattle.startBattle()) {
        return;
    }

    giveExp(getEnemyExp(dragon.getType()));
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

void Game::giveExp(int amount){
    std::cout << "Player gained: " << amount << "xp" << std::endl;
    player.gainExp(amount);

    std::cout << "Player lvl: " << player.getLevel() 
              << " | XP: " << player.getExp() << "/" << player.requiredExpForLvl(player.getLevel() + 1) 
              << std::endl;
}
