//
// Created by misha on 11/18/23.
//

#include "../headers/Heros.h"

namespace game {

//    Hero* createHero(HeroType type) {
//        Hero* hero = nullptr;
//        switch(type) {
//            case HeroType::Superman:
//                hero = new Superman();
//                break;
//            case HeroType::Hulk:
//                hero = new Hulk();
//                break;
//            case HeroType::Batman:
//                hero = new Batman();
//                break;
//        }
//
//        return hero;
//    }
//
//    Hero* Hero::createHero(HeroType type) {
//        Hero* hero = nullptr;
//        switch(type) {
//            case HeroType::Superman:
//                hero = new Superman();
//                break;
//            case HeroType::Hulk:
//                hero = new Hulk();
//                break;
//            case HeroType::Batman:
//                hero = new Batman();
//                break;
//        }
//
//        return hero;
//    }

    Hero* HeroFactory::createHero(HeroType type) {
        Hero* hero = nullptr;
        switch(type) {
            case HeroType::Superman:
                hero = new Superman();
                break;
            case HeroType::Hulk:
                hero = new Hulk();
                break;
            case HeroType::Batman:
                hero = new Batman();
                break;
        }

        return hero;
    }

    Hero* ChristmasHeroFactory::createHero(HeroType type) {
        Hero* hero = nullptr;
        switch(type) {
            case HeroType::Superman:
                hero = new ChristmasSuperman();
                break;
            case HeroType::Hulk:
                hero = new Hulk();
                break;
            case HeroType::Batman:
                hero = new Batman();
                break;
        }

        return hero;
    }

    Hero *SupermanFactory::createHero() {
        return new Superman();
    }

    Hero *HulkFactory::createHero() {
        return new Hulk();
    }

    Hero *BatmanFactory::createHero() {
        return new Batman();
    }
} // game