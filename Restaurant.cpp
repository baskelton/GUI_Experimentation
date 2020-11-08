#include "fileGen.h"
using namespace std;

Restaurant::Restaurant(string nam) {
	name = nam;

	totalRestaurants++;
}

string Restaurant::getInput() {
	stringstream stream;
	stream << name;
	return stream.str();
}

bool Restaurant::operator<(const Restaurant& comp) {
	if (this->name < comp.name)
		return true;
	else
		return false;
}

string Restaurant::getName() { return name; }