cmake_minimum_required(VERSION 4.3)
project(Dungeon_Battle)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Dungeon_Battle
        Armor.cpp
        Armor.hpp
        Battle.cpp
        Battle.hpp
        Dragon.cpp
        Dragon.hpp
        Enemy.cpp
        Enemy.hpp
        EnemyType.hpp
        Game.cpp
        Game.hpp
        Goblin.cpp
        Goblin.hpp
        HybridWeapon.cpp
        HybridWeapon.hpp
        Item.cpp
        Item.hpp
        ItemType.hpp
        main.cpp
        MeleeWeapon.cpp
        MeleeWeapon.hpp
        Orc.cpp
        Orc.hpp
        Player.cpp
        Player.hpp
        RangedWeapon.cpp
        RangedWeapon.h
        Rat.cpp
        Rat.hpp
        Troll.cpp
        Troll.hpp
        Weapon.cpp
        Weapon.hpp
        WeaponType.hpp)
