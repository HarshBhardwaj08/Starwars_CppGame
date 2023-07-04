
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>

using namespace std;
class Weapon {
private:
    string name;
    int damage;

public:
    Weapon(const string& name, int damage);

    string getName() const {
        return name;
    }

    int getDamage() const {
        return damage;
    }
};
#endif // WEAPON_H
