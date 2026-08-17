#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int hp;
    int attack;

public:
    Player();

    void attackEnemy();
    void takeDamage(int damage);

    int getHp() const;
    int getAttack() const;
};

#endif