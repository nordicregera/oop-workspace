#include "player.h"
#include <iostream>

Player::Player(std::string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

std::string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getDamage() {
    return damage;
}

void Player::setName(std::string name) {
    this->name = name;
}

void Player::setHealth(int health) {
    this->health = health;
}

void Player::setDamage(int damage) {
    this->damage = damage;
}

void Player::attack(Player* opponent) {
    opponent->takeDamage(damage);
    std::cout << name << " attacks " << opponent->getName() << " for " << damage << " damage." << std::endl;
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << std::endl;
}

bool Player::isAlive() {
    return health > 0;
}
