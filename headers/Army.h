//
// Created by misha on 11/18/23.
//

#ifndef CREATEPATTERNS_ARMY_H
#define CREATEPATTERNS_ARMY_H

#include "Heros.h"
#include "Warrior.h"
#include <vector>
#include <string>

namespace game {

    class Army {
    public:
        explicit Army() = default;

        void addHero(Hero* hero) {
            mHeros.push_back(hero);
        }

        void addWarrior(Warrior* warrior) {
            mWarriors.push_back(warrior);
        }

        virtual ~Army() = default;
    protected:
        std::vector<Hero*> mHeros{};
        std::vector<Warrior*> mWarriors{};
    };

    class ArmyFactory {
    public:
        virtual Hero* createHero() = 0;
        virtual Warrior* createWarrior() = 0;
    };

    class AmericanArmyFactory : public ArmyFactory {
    public:
        Hero * createHero() override {
            return new Superman();
        }
        Warrior * createWarrior() override {
            return new Bowman();
        }
    };

    class RussianArmyFactory : public ArmyFactory {
    public:
        Hero * createHero() override {
            return new Batman();
        }
        Warrior * createWarrior() override {
            return new Horseman();
        }
    };
}
}


#endif //CREATEPATTERNS_ARMY_H
