cmake_minimum_required(VERSION 3.26)
project(createPatterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(createPatterns main.cpp
        sources/Heros.cpp
        headers/Heros.h
        sources/SetupFactory.cpp
        headers/SetupFactory.h
        sources/Warrior.cpp
        headers/Warrior.h
        headers/Army.h
        sources/Game.cpp
        headers/Game.h)
