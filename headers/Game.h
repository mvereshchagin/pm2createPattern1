//
// Created by misha on 11/18/23.
//

#ifndef CREATEPATTERNS_GAME_H
#define CREATEPATTERNS_GAME_H

#include "Army.h"

namespace game {

    class Game {
    public:
        explicit Game() = default;

        Army* createArmy(ArmyFactory& armyFactory, int count) {
            Army* army = new Army();
            for(int i{0}; i < count; i++) {
                army->addHero(armyFactory.createHero());
                army->addWarrior(armyFactory.createWarrior());
            }
        }

        void Fight(Army* army1, Army* army2) {

        }

        virtual ~Game() = default;
    };

} // game

#endif //CREATEPATTERNS_GAME_H
