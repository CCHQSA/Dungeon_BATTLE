#ifndef ENEMY_H
#define ENEMY_H
#include "EnemyType.hpp"

#include <string>

class Enemy {
private:
    std::string name;
    int hp;
    int attack;
    EnemyType type;
public:
    Enemy(std::string name, int hp, int attack, EnemyType type);

    void takeDamage(int damage);

    int getHp() const;
    int getAttack() const;
    EnemyType getType() const;
    std::string getName() const;
};

#endif