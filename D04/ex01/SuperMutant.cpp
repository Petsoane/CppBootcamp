#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	log("Gaaah. ME want smash heads");
}

SuperMutant::SuperMutant( SuperMutant& otherObj): Enemy(otherObj)
{
	this->setHP(otherObj.getHP());
	this->setType(otherObj.getType());
	log("Gaaah. ME want smash heads");
}

SuperMutant::~SuperMutant()
{
	log("AAArgh...");
}


void SuperMutant::takeDamage(int amount)
{
	int hp = getHP();
	if (hp > 0)
	{
		if ((hp - (amount - damageReduction))) hp -= (amount - damageReduction);
		else hp = 0;
	}
}