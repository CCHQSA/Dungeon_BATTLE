#include <iostream>
#include "Player.h"
#include "Rat.h"

int main() {

    Rat rat;
    Player player;

    std::cout << rat.getHp() << " " << rat.getAttack() << "\n";

    rat.takeDamage(player.getAttack());

    return 0;
}