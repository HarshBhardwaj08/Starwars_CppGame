#include <iostream>
#include <string>
#include <ctime>
#include <random>

class Weapon {
private:
    string name;
    int damage;
  

public:
    Weapon(const string& name, int damage ) : name(name), damage(damage)  {}
     
    string getName() const {
        return name;
    }

    int getDamage() const {
        return damage;
    }
   
    
};

class Shield {
private:
    string name;
    int defense;

public:
    Shield(const string& name, int defense) : name(name), defense(defense) {}

    string getName() const {
        return name;
    }

    int getDefense() const {
        return defense;
    }
};

class Attack {
private:
    const Weapon* weapon;
    const Shield* shield;

public:
    Attack(const Weapon* weapon, const Shield* shield) : weapon(weapon), shield(shield) {}

    int calculateDamage() const {
        int totalDamage = weapon->getDamage()  - shield->getDefense();
        return (totalDamage > 0) ? totalDamage : 0;
    }
};

class Player {
private:
    string name;
    int healthPoints;
    const Weapon* selectedWeapon;
    const Shield* selectedShield;

public:
    Player(const string& name, int healthPoints, const Weapon* selectedWeapon, const Shield* selectedShield)
        : name(name), healthPoints(healthPoints), selectedWeapon(selectedWeapon), selectedShield(selectedShield) {}

    string getName() const {
        return name;
    }

    int getHealthPoints() const {
        return healthPoints;
    }

    void reduceHealthPoints(int damage) {
        healthPoints -= damage;
        if (healthPoints < 0) {
            healthPoints = 0;
        }
    }

    Attack generateAttack() const {
        return Attack(selectedWeapon, selectedShield);
    }
};

void select_character() {
    cout << "Choose Your Hero: Jedi, Sith, Rebels, Empire" << endl;
    const int arraySize = 4;
    string store_character[arraySize] = { "Jedi", "Sith", "Rebels", "Empire" };

    bool matchFound = false;

    while (!matchFound) {
        cout << "Enter a string: ";
        cin >> userInput;

        for (int i = 0; i < arraySize; i++) {
            if (userInput == store_character[i]) {
                matchFound = true;
                break;
            }
        }

        if (!matchFound) {
            cout << "Choose your hero by option, not by your imagination" << endl;
        }
    }
}
bool getRandomBool() {
    // Initialize the random number generator
    random_device rd;
    uniform_int_distribution<int> distribution(0, 1);

    // Generate a random number (0 or 1)
    int randomNumber = distribution(rd);

    // Return true if the random number is 1, false if it is 0
    return randomNumber == 1;
}
