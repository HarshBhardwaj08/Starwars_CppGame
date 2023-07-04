#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "weapon.h"
#include "shield.h"
#include "attack.h"

using namespace std;
class Player {
private:
    string name;
    int healthPoints;
    const Weapon* selectedWeapon;
    const Shield* selectedShield;

public:
    Player(const string& name, int healthPoints, const Weapon* selectedWeapon, const Shield* selectedShield);

    string getName() const;
    int getHealthPoints() const;
    void reduceHealthPoints(int damage);
    Attack generateAttack() const;
};

#endif  // PLAYER_H
