#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;

class fileGen
{
private:
	string x;
	string y;
	vector<string> RestaurantCheap;
	vector<string> RestaurantMod;
	vector<string> RestaurantEx;
	string Restaurant_File_Name;
public:
	fileGen();
	void setFileName(string file);
	void setName(string name);
	void cheap();
	void moderate();
	void expensive();
	void EnterAndWriteRestaurants();
	void ReadAndDisplayRestaurants();

};