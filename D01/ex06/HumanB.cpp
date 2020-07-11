#include "HumanB.hpp"
#include "HumanBase.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>


HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon& wpn)
{
	this->wpn = &wpn;
}