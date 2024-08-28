#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

int Wizard::getMana() {
    return mana;
}

void Wizard::setMana(int mana) {
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    if (mana > 0) {
        opponent->takeDamage(damage);
        std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage." << std::endl;
        mana -= 10;  // 假设每次施法消耗10点魔法值
    } else {
        std::cout << name << " has no mana left to cast a spell!" << std::endl;
    }
}

void Wizard::attack(Player* opponent) {
    castSpell(opponent);
}
