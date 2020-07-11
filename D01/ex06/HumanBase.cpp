#include "HumanBase.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanBase::HumanBase()
{
	this->wpn = NULL;
	name = "";
}

void HumanBase::attack()
{
	std::cout << name << " attacks with ";
	std::cout << wpn->getType() << std::endl;
}