#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Rat.h"

class Game {
private:
    Player player;
    Rat rat;

public:
    Game();
    void startGame();
};

#endif