#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Rat.h"
#include "Goblin.h"
#include "Orc.h"
#include "Troll.h"
#include "Dragon.h"

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