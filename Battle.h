#ifndef BATTLE_H
#define BATTLE_H
#include "Player.h"
#include "Enemy.h"

class Battle{
  private:
    Player& player;
    Enemy& enemy;

  public:

    Battle(Player& player, Enemy& enemy);

    void startBattle();

};

#endif