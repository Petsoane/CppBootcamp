#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& wpn)
{
	this->name = name;
	this->wpn = &wpn;
}
