/*
Assignment: Project Week 8
Developer: Bryce Skelton
Class: CIS170C
Date: 8/28/2020
*/

#include "fileGen.h"

//Reads record of where you were chosen to eat this time running the program.

//const string Restaurant_File_Name = ("Restaurant.txt");

int main()
{
    char choice1 = ' ';
    char amount = ' ';
    string name;
    unsigned seed = time(0);
    srand(seed);

    fileGen Food;

    string file = " ";

    cout << "Welcome to the restaurant generator!" << endl;

    cout << "Please enter a name for your files to be written to (include .txt at the end): " << endl;
    getline(cin, file);
    Food.setFileName(file);



    while (choice1 != 'E' && choice1 != 'e')
    {
        cout << "Please enter your name: ";
        cin.clear();
        cin.ignore();
        getline(cin, name);
        Food.setName(name);

        cout << "Thank you, " << name << endl;

        cout << name << ", would you like to eat at a cheap restaurant (L), a moderately priced restaurant(M), ";

        cout << " or a top of the line restaurant (T): " << endl;

        cin >> amount;

        switch (amount) {
        case 'L':
            Food.cheap();
            cout << "To exit enter E or to continue enter C" << endl;
            cin >> choice1;
            break;
        case 'M':
            Food.moderate();
            cout << "To exit enter E or to continue enter C" << endl;
            cin >> choice1;
            break;
        case 'T':
            Food.expensive();
            cout << "To exit enter E or to continue enter C" << endl;
            cin >> choice1;
            break;
        default:
            cout << "Invalid input, please enter L, M, T, or E." << endl;
            cin >> choice1;
            break;
        }
    }
    cout << "To display results enter 'D': " << endl;
    cin >> choice1;

    if (choice1 == 'D') {
        Food.ReadAndDisplayRestaurants();
    }


    return 0;
}
