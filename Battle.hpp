#ifndef BATTLE_H
#define BATTLE_H
#include "Player.hpp"
#include "Enemy.hpp"

class Battle{
  private:
    Player& player;
    Enemy& enemy;

  public:

    Battle(Player& player, Enemy& enemy);

    bool startBattle();

};

#endif