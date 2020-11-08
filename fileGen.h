#pragma once
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

enum objectTypes { Restaurant };
class BaseItem
{
public:
	BaseItem(); //default constructor
	virtual string getInput() = 0; //pure virtual function to get item description
	string getName();

protected:
	string Name;
};
class Restaurant : public BaseItem {
private:
	string name;
public:
	Restaurant(string);
	string getInput() = 0; //pure virtual function to get item description
	string getName();
	bool operator<(const Restaurant&);	//Overloader needed for sorting.
	static int totalRestaurants;
};

class nameGen : public BaseItem
{
public:
	nameGen(string);
	string getInput() = 0;
	string getName();

private:
	string restaurantName;
};

class fileGen
{
private:
	string x;
	string y;
	vector<Restaurant> RestaurantCheap;
	vector<string> RestaurantMod;
	vector<string> RestaurantEx;
	string Restaurant_File_Name;
public:
	fileGen();
	void setFileName(string);
	void setName(string);
	void cheap(string);
	void moderate();
	void expensive();
	void addRestaurant(string);
	void EnterAndWriteRestaurants();
	void ReadAndDisplayRestaurants(); 
	

};