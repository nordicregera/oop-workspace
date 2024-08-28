#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(std::string name, int health, int damage, int mana);

    int getMana();
    void setMana(int mana);

    void castSpell(Player* opponent);
    void attack(Player* opponent) override;
};

#endif // WIZARD_H
