#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);

    std::string getName();
    int getHealth();
    int getDamage();

    void setName(std::string name);
    void setHealth(int health);
    void setDamage(int damage);

    virtual void attack(Player* opponent);
    void takeDamage(int damage);

    bool isAlive();
};

#endif 
