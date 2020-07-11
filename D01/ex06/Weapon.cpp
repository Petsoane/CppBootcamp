#include "Weapon.hpp"
#include <string>


Weapon::Weapon(std::string type)
{
	this->type = type;
}

void Weapon::setType(std::string t)
{
	this->type = t;
}

const std::string& Weapon::getType()
{
	return type;
}