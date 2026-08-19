#ifndef GAME_H
#define GAME_H

#include "Player.hpp"
#include "Rat.hpp"
#include "Goblin.hpp"
#include "Orc.hpp"
#include "Troll.hpp"
#include "Dragon.hpp"

class Game {
private:
    Player player;
    Rat rat;
    Goblin goblin;
    Orc orc;
    Troll troll;
    Dragon dragon;

public:
    Game();
    void startGame();
    void healPlayer();
    void giveExp(int amount);
    void equipItem();
};

#endif