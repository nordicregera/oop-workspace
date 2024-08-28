#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class Warrior : public Player {
private:
    std::string weapon;

public:
    Warrior(std::string name, int health, int damage, std::string weapon);

    std::string getWeapon();
    void setWeapon(std::string weapon);

    void swingWeapon(Player* opponent);
    void attack(Player* opponent) override;
};

#endif // WARRIOR_H
