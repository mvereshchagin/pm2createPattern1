//
// Created by misha on 11/18/23.
//

#ifndef CREATEPATTERNS_HEROS_H
#define CREATEPATTERNS_HEROS_H

#include <string>
#include <sstream>

namespace game {

    enum class HeroType {
        Superman,
        Hulk,
        Batman
    };

    class Hero {
    public:
        explicit Hero() = default;

        [[nodiscard]] virtual std::string toString() const = 0;

        // static Hero* createHero(HeroType type);

        virtual ~Hero() = default;
    };

    class HeroFactory {
    public:
        explicit HeroFactory() = default;
        virtual Hero* createHero(HeroType type);
        virtual ~HeroFactory() = default;
    };

    class OneHeroFactory {
    public:
        explicit OneHeroFactory() = default;
        virtual Hero* createHero() = 0;
        virtual ~OneHeroFactory() = default;
    };

    class ChristmasHeroFactory : public HeroFactory{
    public:
        explicit ChristmasHeroFactory() : HeroFactory() {}
        Hero* createHero(HeroType type) override;
    };

    class Superman : public Hero {
    public:
        explicit Superman() : Hero() {}

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Superman";
            return ss.str();
        }
    };

    class SupermanFactory : public OneHeroFactory {
    public:
        explicit SupermanFactory() : OneHeroFactory() {}
        Hero * createHero() override;
    };

    class Hulk : public Hero {
    public:
        explicit Hulk() : Hero() {}

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Hulk";
            return ss.str();
        }
    };
    class HulkFactory : public OneHeroFactory {
    public:
        explicit HulkFactory() : OneHeroFactory() {}
        Hero * createHero() override;
    };


    class Batman : public Hero {
    public:
        explicit Batman() : Hero() {}

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Batman";
            return ss.str();
        }
    };
    class BatmanFactory : public OneHeroFactory {
    public:
        explicit BatmanFactory() : OneHeroFactory() {}
        Hero * createHero() override;
    };

    class ChristmasSuperman : public Superman {
        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Christmas superman";
            return ss.str();
        }
    };

    // Hero* createHero(HeroType type);

} // game

#endif //CREATEPATTERNS_HEROS_H
