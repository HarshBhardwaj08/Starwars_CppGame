#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include "Weapon.h"
#include "Shield.h"
#include "Attack.h"
#include "Player.h"

using namespace std;



bool getRandomBool() {
    // Initialize the random number generator
    static default_random_engine randomEngine(static_cast<unsigned int>(time(0)));
    static uniform_int_distribution<int> distribution(0, 1);

    // Generate a random number (0 or 1)
    int randomNumber = distribution(randomEngine);
    return (randomNumber == 1);
}

void selectCharacter(string& userInput) {
    cout << "Choose Your Hero: Jedi, Sith, Rebels, Empire" << endl;
    const int arraySize = 4;
    string storeCharacter[arraySize] = { "Jedi", "Sith", "Rebels", "Empire" };

    bool matchFound = false;

    while (!matchFound) {
        cout << "Enter a string: ";
        cin >> userInput;

        for (int i = 0; i < arraySize; i++) {
            if (userInput == storeCharacter[i]) {
                matchFound = true;
                break;
            }
        }

        if (!matchFound) {
            cout << "Choose your hero by option, not by your imagination" << endl;
        }
    }
}

int main() {
    char playAgain;
    do {
        string userInput;
        selectCharacter(userInput);

        random_device rd;
        static uniform_int_distribution<int> toss(1, 2);
        bool heroTossWon = false;

        cout << "Coin Toss\n";
        cout << "Choose Heads by pressing 1 or Tails by pressing 2: ";
        int num;
        cin >> num;

        if (toss(rd) == num) {
            cout << toss(rd) << " " << userInput << " won the toss\n";
            heroTossWon = true;
        }
        else {
            cout << toss(rd) << " Darth Vader won the toss\n";
        }

        // Seed the random number generator
        srand(static_cast<unsigned int>(time(0)));

        // Weapons
        Weapon lightsaber("Lightsaber", 20);
        Weapon blaster("Blaster", 30);
        Weapon vibroblade("Vibroblade", 50);

        // Shields
        Shield forceField("Force Field", 15);
        Shield energyShield("Energy Shield", 25);
        Shield deflectorShield("Deflector Shield", 50);

        cout << "Pick Your Weapon:\n";
        cout << "1. Lightsaber\n";
        cout << "2. Blaster\n";
        cout << "3. Vibroblade\n";
        int weaponChoice;
        cin >> weaponChoice;

        const Weapon* selectedWeapon;

        switch (weaponChoice) {
            case 1:
                selectedWeapon = &lightsaber;
                break;
            case 2:
                selectedWeapon = &blaster;
                break;
            case 3:
                selectedWeapon = &vibroblade;
                break;
            default:
                cout << "Invalid choice. Using default weapon.\n";
                selectedWeapon = &lightsaber;
                break;
        }

        // Choose player's shield
        cout << "Choose Your Shield:\n";
        cout << "1. Force Field\n";
        if (weaponChoice <= 1) {
            cout << "2. Energy Shield\n";
            cout << "3. Deflector Shield\n";
        }

        int shieldChoice;
        cin >> shieldChoice;

        const Shield* selectedShield;

        switch (shieldChoice) {
            case 1:
                selectedShield = &forceField;
                break;
            case 2:
                if (weaponChoice <= 1) {
                    selectedShield = &energyShield;
                }
                break;
            case 3:
                if (weaponChoice <= 1) {
                    selectedShield = &deflectorShield;
                }
                break;
            default:
                cout << "Invalid choice. Using default shield.\n";
                selectedShield = &forceField;
                break;
        }

        random_device enemyRd;
        uniform_int_distribution<int> enemyRandom(1, 3);
        int randomWeapon = enemyRandom(enemyRd);
        const Weapon* enemySelectedWeapon;

        switch (randomWeapon) {
            case 1:
                enemySelectedWeapon = &lightsaber;
                break;
            case 2:
                enemySelectedWeapon = &blaster;
                break;
            case 3:
                enemySelectedWeapon = &vibroblade;
                break;
            default:
                cout << "Invalid choice. Using default weapon.\n";
                enemySelectedWeapon = &lightsaber;
                break;
        }

        int enemyShieldChoice = enemyRandom(enemyRd);
        const Shield* enemySelectedShield;

        switch (enemyShieldChoice) {
            case 1:
                enemySelectedShield = &forceField;
                break;
            case 2:
                if (randomWeapon <= 1) {
                    enemySelectedShield = &energyShield;
                }
                break;
            case 3:
                if (randomWeapon <= 1) {
                    enemySelectedShield = &deflectorShield;
                }
                break;
            default:
                cout << "Invalid choice. Using default shield.\n";
                enemySelectedShield = &forceField;
                break;
        }

        // Players
        Player player1(userInput, 100, selectedWeapon, selectedShield);
        Player player2("Darth Vader", 100, enemySelectedWeapon, enemySelectedShield);

        // Game loop
        while (player1.getHealthPoints() > 0 && player2.getHealthPoints() > 0) {
            bool dodge = getRandomBool();
            bool enemyDodge = getRandomBool();
            Attack attack1 = player1.generateAttack();
            Attack attack2 = player2.generateAttack();

            int damage1 = attack1.calculateDamage();
            int damage2 = attack2.calculateDamage();

            if (dodge) {
                damage2 = 0;
            }
            if (enemyDodge) {
                damage1 = 0;
            }

            player2.reduceHealthPoints(damage1);
            player1.reduceHealthPoints(damage2);

            if (heroTossWon) {
                cout << player1.getName() << " attacks " << player2.getName() << " with " << damage1
                    << " damage. " << player2.getName() << " has " << player2.getHealthPoints() << " health points remaining.\n";
                cout << endl;

                cout << "Player Weapon: " << selectedWeapon->getName() << ", Selected Shield: " << selectedShield->getName() << endl;
                cout << "Dodge = " << boolalpha << dodge << endl;
                cout << endl;
                cout << player2.getName() << " attacks " << player1.getName() << " with " << damage2
                    << " damage. " << player1.getName() << " has " << player1.getHealthPoints() << " health points remaining.\n";
                cout << "Enemy Weapon: " << enemySelectedWeapon->getName() << ", Selected Shield: " << enemySelectedShield->getName() << endl;
                cout << "Enemy_Dodge = " << boolalpha << enemyDodge << endl;
            }
            else {
                cout << player2.getName() << " attacks " << player1.getName() << " with " << damage2
                    << " damage. " << player1.getName() << " has " << player1.getHealthPoints() << " health points remaining.\n";
                cout << "Enemy Weapon: " << enemySelectedWeapon->getName() << ", Selected Shield: " << enemySelectedShield->getName() << endl;
                cout << "Enemy_Dodge = " << boolalpha << enemyDodge << endl;
                cout << player1.getName() << " attacks " << player2.getName() << " with " << damage1
                    << " damage. " << player2.getName() << " has " << player2.getHealthPoints() << " health points remaining.\n";
                cout << "Player Weapon: " << selectedWeapon->getName() << ", Selected Shield: " << selectedShield->getName() << endl;
                cout << "Dodge = " << boolalpha << dodge << endl;
            }

            cout << "-------------------------\n";
            if (player1.getHealthPoints() > 0 && player2.getHealthPoints() > 0) {
                cout << "Coin Toss\n";
                cout << "Choose Heads by pressing 1 or Tails by pressing 2: " << endl;
                cin >> num;

                if (toss(rd) == num) {
                    cout << toss(rd) << " " << userInput << " won the toss\n";
                    heroTossWon = !heroTossWon;
                }
                else {
                    cout << toss(rd) << " Darth Vader won the toss\n";
                }
            }
        }

        // Display the winner
        if (player1.getHealthPoints() <= 0) {
            cout << player2.getName() << " wins!\n";
        }
        else {
            cout << player1.getName() << " wins!\n";
        }

        cout << "Would you like to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}
