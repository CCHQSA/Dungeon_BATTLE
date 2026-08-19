#include <iostream>
#include "Battle.h"

Battle::Battle(Player& player, Enemy& enemy)
    : player(player), enemy(enemy) {
}

bool Battle::startBattle() {
    int choice;
    int dealtDamage;

    while (player.getHp() > 0 && enemy.getHp() > 0) {

        std::cout << "\nPlayer hp: " << player.getHp() << std::endl;
        std::cout << enemy.getName() << " hp: " << enemy.getHp() << std::endl;

        std::cout << "\n1. Attack" << std::endl;
        std::cout << "2. Run" << std::endl;
        std::cout << "Choose: ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Choose 1 or 2." << std::endl;
            continue;
        }

        switch (choice) {

        case 1:
            std::cout << "\nPlayer attacks!" << std::endl;
            if(player.getEquippedWeapon() != nullptr){
                dealtDamage = player.getAttack() + player.getEquippedWeapon()->getDamage();
            }else{
                dealtDamage = player.getAttack();
            }
            
            enemy.takeDamage(dealtDamage);
            
            if (enemy.getHp() <= 0) {
                std::cout << enemy.getName() << " died!" << std::endl;
                std::cout << "You win!" << std::endl;
                return true;
            }

            std::cout << enemy.getName() << " attacks!" << std::endl;

            player.takeDamage(enemy.getAttack());

            if (player.getHp() <= 0) {
                std::cout << "You died!" << std::endl;
                std::cout << "You lose!" << std::endl;
                return false;
            }

            break;

        case 2:
            std::cout << "You escaped!" << std::endl;
            return false;

        default:
            std::cout << "Invalid choice. Choose 1 or 2." << std::endl;
            break;
        }
    }

    return false;
}