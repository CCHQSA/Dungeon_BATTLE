#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int hp;
    int maxHp;
    int attack;

public:
    Player();

    void attackEnemy();
    void takeDamage(int damage);
    void heal(int amount);

    int getHp() const;
    int getAttack() const;
};

#endif