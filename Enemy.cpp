#include<iostream>
#include<string>
#include "Enemy.h"

Enemy::Enemy(std::string name, int hp, int attack, EnemyType type){
  this->name = name;
  this->hp = hp;
  this->attack = attack;
  this->type = type;
}

void Enemy::takeDamage(int damage){
  hp -= damage;
}

int Enemy::getHp() const {
  return this->hp;
}
int Enemy::getAttack() const {
  return this->attack;
}

std::string Enemy::getName() const {
  return this->name;
}