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
  if(hp <= 0){
    std::cout<<"Dead";
  }else{
    std::cout << "Enemy hp: " << hp;
  }
}

int Enemy::getHp(){
  return this->hp;
}
int Enemy::getAttack(){
  return this->attack;
}