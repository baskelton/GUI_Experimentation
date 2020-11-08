#include "fileGen.h"
using namespace std;

BaseItem::BaseItem(){}

string BaseItem::getInput(){
	stringstream stream;
	stream << "No restaurant.";

	return stream.str();
}

string BaseItem::getName() { return Name; }