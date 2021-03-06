#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>



inline void log(std::string msg)
{
	std::cout << msg << std::endl;
}


ScavTrap::ScavTrap(std::string const & name): ClapTrap()
{
	log("ScavTrap Constructor called");
	this->name = name;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeDamage = 3;
	this->rangedDamage = 20;
	this->armorDamageReduction = 5;
}

/**
	When inheriting a class and defining the copy constructor, you have to call
	the base copy constructor explicitly.
*/
ScavTrap::ScavTrap(const ScavTrap& otherObject): ClapTrap(otherObject)
{
	log("ScavTrap Copy constructor called");
}

ScavTrap::~ScavTrap()
{
	log("ScavTrap Destructor was called");
}


void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangedDamage << " points of damage";
	std::cout << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target;
	std::cout << " close up, causing " << meleeDamage << " points of damage";
	std::cout << std::endl;	
}

void ScavTrap::challangeNewcomer(std::string const & target)
{
	log("[ challangeNewcomer memeber function called ]");
	log(target);
}


