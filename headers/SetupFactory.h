//
// Created by misha on 11/18/23.
//

#ifndef CREATEPATTERNS_SETUPFACTORY_H
#define CREATEPATTERNS_SETUPFACTORY_H

#include "Heros.h"

namespace game {

    class SetupFactory {
    public:
        explicit SetupFactory() = default;
        virtual HeroFactory* getHeroFactory() = 0;

        virtual ~SetupFactory() = default;
    };

    class OrdinarySetupFactory : public SetupFactory {
    };

} // game

#endif //CREATEPATTERNS_SETUPFACTORY_H
