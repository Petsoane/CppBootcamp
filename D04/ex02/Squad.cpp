#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include <string>
#include <vector>
#include <iostream>

#define log(x) std::cout << x << std::endl


Squad::Squad()
{
	// log("New squad created");
}

Squad::Squad(Squad& otherObj): ISquad(otherObj)
{
	// log("The squad was duplicated");
	ISpaceMarine* tmp;

	for (auto i = unit.begin(); i != unit.end(); i++){
		tmp = *i;
		otherObj.push(tmp);
	}
}

Squad::~Squad()
{
	// log("Squad destroyed");
	for (auto u = unit.begin(); u != unit.end(); u++){
		delete *u;
	}
}

int Squad::getCount() const
{
	return unit.size();
}

int Squad::push(ISpaceMarine* sm)
{
	unit.push_back(sm);
	return getCount();
}

ISpaceMarine* Squad::getUnit(int pos) const
{
	auto tmp = unit.at(pos);

	return tmp;
}


