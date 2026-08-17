#include<iostream>
#include "Game.h"
#include "Rat.h"
#include "Battle.h"
Game::Game(){
}

void Game::startGame(){
  Battle battle(player, rat);
  battle.startBattle(); 
}