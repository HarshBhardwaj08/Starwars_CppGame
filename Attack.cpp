#include "attack.h"

Attack::Attack(const Weapon* weapon, const Shield* shield) : weapon(weapon), shield(shield) {}

int Attack::calculateDamage() const {
    int totalDamage = weapon->getDamage() - shield->getDefense();
    return (totalDamage > 0) ? totalDamage : 0;
}
