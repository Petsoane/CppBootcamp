#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;

PowerFist::PowerFist(): AWeapon("PowerFist", 8, 50)
{
	log("PowerFist created");
}

PowerFist::PowerFist( PowerFist& otherObj): AWeapon(otherObj)
{
	this->setName(otherObj.getName());
	this->setDamage(otherObj.getDamage());
	this->setAPCost(otherObj.getAPCost());
}

PowerFist::~PowerFist()
{
	log("PowerFist Destroyed");
}


void PowerFist::attack()
{
	log("* pschhh.... SBAM!!");
}