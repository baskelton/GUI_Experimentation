#include "fileGen.h"

fileGen::fileGen() {
    string x = "Unknown"; string Restaurant_File_Name = "Restaurant.txt";
}
void fileGen::setFileName(string file) {
    Restaurant_File_Name = file;
}
void fileGen::setName(string name) {
    y = name;
}
void fileGen::cheap() {
    vector<string> RestaurantCheap = { "McDonalds", "Burger King", "Wendy's", "Subway" };
    int randIndex = rand() % 4;
    x = RestaurantCheap[randIndex];
    fileGen::EnterAndWriteRestaurants();
}
void fileGen::moderate() {
    vector<string> RestaurantMod = { "Chilis", "Applebees", "Buffalo Wild Wings", "Pizza Hut" };
    int randIndex = rand() % 4;
    x = RestaurantMod[randIndex];
    fileGen::EnterAndWriteRestaurants();
}
void fileGen::expensive() {
    vector<string> RestaurantEx = { "616", "Wolfgang Puck", "Delivery", "Random Place" };
    int randIndex = rand() % 4;
    x = RestaurantEx[randIndex];
    fileGen::EnterAndWriteRestaurants();
}
void fileGen::EnterAndWriteRestaurants() {
    fstream outfile;
    outfile.open(Restaurant_File_Name, ios::out | ios::app);
    if (outfile.is_open()) {
        outfile << y << "- " << x << endl;
    }
    else
        cout << "Error, could not open the desired file for writing." << endl;
    outfile.close();
}
void fileGen::ReadAndDisplayRestaurants() {
    fstream infile;
    infile.open(Restaurant_File_Name);
    if (infile.is_open()) {
        while (getline(infile, y, '-')) {
            cout << endl;
            getline(infile, x, ',');
        }
        cout << y << " enjoy your meal at " << x << endl;
    }
    else
        cout << "Error; could not open the desired file for reading." << endl;
    infile.close();
}