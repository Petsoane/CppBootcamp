#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	log("* click click click");
}

RadScorpion::RadScorpion(RadScorpion& otherObj): Enemy(otherObj)
{
	this->setHP(otherObj.getHP());
	this->setType(otherObj.getType());
	// log("* SPROTCH *");
}

RadScorpion::~RadScorpion()
{
	log("* SPROTCH *");
}
