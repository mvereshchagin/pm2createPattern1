#include "headers/Heros.h"
#include "headers/Army.h"
#include "headers/Game.h"
#include <iostream>
#include <vector>

int main() {

    using namespace game;

    std::vector<Hero*> heros{};

//    heros.push_back(Hero::createHero(HeroType::Superman));
//    heros.push_back(Hero::createHero(HeroType::Hulk));
//    heros.push_back(Hero::createHero(HeroType::Batman));

    HeroFactory heroFactory{};
    // ChristmasHeroFactory heroFactory{};
    heros.push_back(heroFactory.createHero(HeroType::Superman));
    heros.push_back(heroFactory.createHero(HeroType::Hulk));
    heros.push_back(heroFactory.createHero(HeroType::Batman));



    SupermanFactory supermanFactory{};
    HulkFactory hulkFactory{};
    BatmanFactory batmanFactory{};

    heros.push_back(supermanFactory.createHero());
    heros.push_back(hulkFactory.createHero());
    heros.push_back(batmanFactory.createHero());

    std::cout << "----------------------- Heros -----------------\n";
    for(auto hero : heros) {
        std::cout << hero->toString() << std::endl;
    }

    return 0;
}

void doGame() {
    using namespace game;
    Game game{};
    AmericanArmyFactory armyFactory1{};
    RussianArmyFactory armyFactory2{};

    Army* army1 = game.createArmy(armyFactory1, 100);
    Army* army2 = game.createArmy(armyFactory2, 100);
    game.Fight(army1, army2);
}
