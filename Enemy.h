#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
private:
    std::string name;
    int hp;
    int attack;

public:
    Enemy(std::string name, int hp, int attack);

    void takeDamage(int damage);

    int getHp();
    int getAttack();
};

#endif