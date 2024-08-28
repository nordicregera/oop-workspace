#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Warrior::getWeapon() {
    return weapon;
}

void Warrior::setWeapon(std::string weapon) {
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage);
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << " for " << damage << " damage." << std::endl;
}

void Warrior::attack(Player* opponent) {
    swingWeapon(opponent);
}
