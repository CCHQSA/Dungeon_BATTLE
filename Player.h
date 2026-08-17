#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int hp;
    int maxHp;
    int attack;
    int exp;
    int level;

public:
    Player();

    void attackEnemy();
    void takeDamage(int damage);
    void heal(int amount);
    void gainExp(int amount);
    int requiredExpForLvl(int level);


    int getHp() const;
    int getAttack() const;


};

#endif