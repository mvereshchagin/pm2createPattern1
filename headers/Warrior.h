//
// Created by misha on 11/18/23.
//

#ifndef CREATEPATTERNS_WARRIOR_H
#define CREATEPATTERNS_WARRIOR_H

#include <string>
#include <sstream>

namespace game {

    class Warrior {
    public:
        explicit Warrior() = default;

        [[nodiscard]] virtual std::string toString() const = 0;

        virtual ~Warrior() = default;
    };

    class Horseman : public Warrior {
    public:
        explicit Horseman() : Warrior() {
        }

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Horseman";
            return ss.str();
        }
    };

    class Infantryman : public Warrior {
    public:
        explicit Infantryman() : Warrior() {
        }

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Infantryman";
            return ss.str();
        }
    };

    class Bowman : public Warrior {
    public:
        explicit Bowman() : Warrior() {
        }

        [[nodiscard]] std::string toString() const override {
            std::stringstream ss{};
            ss << "Bowman";
            return ss.str();
        }
    };

} // game

#endif //CREATEPATTERNS_WARRIOR_H
