#include "player.h"
using namespace std;
Player::Player(const string& name, int healthPoints, const Weapon* selectedWeapon, const Shield* selectedShield)
    : name(name), healthPoints(healthPoints), selectedWeapon(selectedWeapon), selectedShield(selectedShield) {}

string Player::getName() const {
    return name;
}

int Player::getHealthPoints() const {
    return healthPoints;
}

void Player::reduceHealthPoints(int damage) {
    healthPoints -= damage;
    if (healthPoints < 0) {
        healthPoints = 0;
    }
}

Attack Player::generateAttack() const {
    return Attack(selectedWeapon, selectedShield);
}

