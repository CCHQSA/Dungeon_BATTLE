#include <iostream>
#include "Player.h"
#include "Rat.h"
#include "Goblin.h"
#include "Troll.h"
#include "Orc.h"
#include "Dragon.h"

int main() {

    Rat rat;
    Goblin goblin;
    Troll troll;
    Orc orc;
    Dragon dragon;
    Player player;


    Enemy enemy = rat;
do
{
    std::cout << "Player hp, damage: "
              << player.getHp() << " " << player.getAttack() << "\n";

    std::cout << enemy.getName() << " hp, damage: "
              << enemy.getHp() << " " << enemy.getAttack() << "\n";

    std::cout << "Player attacks\n";

    enemy.takeDamage(player.getAttack());

    std::cout << enemy.getName() << " hp: "
              << enemy.getHp() << "\n";

    if (enemy.getHp() > 0)
    {
        player.takeDamage(enemy.getAttack());

        std::cout << "Player hp: "
                  << player.getHp() << "\n";
    }

} while (player.getHp() > 0 && enemy.getHp() > 0);
    
}