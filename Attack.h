#ifndef ATTACK_H
#define ATTACK_H

#include "weapon.h"
#include "shield.h"

class Attack {
private:
    const Weapon* weapon;
    const Shield* shield;

public:
    Attack(const Weapon* weapon, const Shield* shield);

    int calculateDamage() const;
};

#endif  // ATTACK_H
