#include "ScavTrap.hpp"
#include <string>
#include <iostream>



inline void log(std::string msg)
{
	std::cout << msg << std::endl;
}


ScavTrap::ScavTrap(std::string const & name)
{
	log("Constructor called");
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

ScavTrap::ScavTrap(const ScavTrap& otherObject)
{
	log("Copy constructor called");
	this->name = otherObject.name;
	this->level = otherObject.level;
	this->hitPoints = otherObject.hitPoints;
	this->maxHitPoints = otherObject.maxHitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->meleeDamage = otherObject.meleeDamage;
	this->armorDamageReduction = otherObject.armorDamageReduction;
}

ScavTrap::~ScavTrap()
{
	log("Destructor was called");
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


