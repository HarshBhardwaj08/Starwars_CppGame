#ifndef SHIELD_H
#define SHIELD_H
#include <iostream>
#include <string>
using namespace std;
class Shield {
private:
    string name;
    int defense;

public:
    Shield(const string& name, int defense);

    string getName() const {
        return name;
    }

    int getDefense() const {
        return defense;
    }
};



#endif // SHIELD_H
