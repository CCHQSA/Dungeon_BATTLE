cmake_minimum_required(VERSION 4.3)
project(Dungeon_Battle)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Dungeon_Battle
        Armor.cpp
        Armor.h
        Battle.cpp
        Battle.h
        Dragon.cpp
        Dragon.h
        Enemy.cpp
        Enemy.h
        EnemyType.h
        Game.cpp
        Game.h
        Goblin.cpp
        Goblin.h
        HybridWeapon.cpp
        HybridWeapon.h
        Item.cpp
        Item.h
        ItemType.h
        main.cpp
        MeleeWeapon.cpp
        MeleeWeapon.h
        Orc.cpp
        Orc.h
        Player.cpp
        Player.h
        RangedWeapon.cpp
        RangedWeapon.h
        Rat.cpp
        Rat.h
        Troll.cpp
        Troll.h
        Weapon.cpp
        Weapon.h
        WeaponType.h)
