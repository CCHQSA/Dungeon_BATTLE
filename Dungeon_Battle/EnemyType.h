#ifndef ENEMY_TYPE_H
#define ENEMY_TYPE_H

enum class EnemyType{
  RAT,
  GOBLIN,
  ORC,
  TROLL,
  DRAGON
};

constexpr int getEnemyExp(EnemyType type) {
    switch (type) {
        case EnemyType::RAT:    return 10;
        case EnemyType::GOBLIN: return 35;
        case EnemyType::ORC:    return 100;
        case EnemyType::TROLL:  return 250;
        case EnemyType::DRAGON: return 1000;
    }
    return 0;
}

#endif