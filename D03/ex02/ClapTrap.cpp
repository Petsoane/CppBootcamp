#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>


inline void log(std::string msg)
{
	std::cout << msg << std::endl;
}


ClapTrap::ClapTrap()
{
	log("Claptrap default constructor called");
}

ClapTrap::ClapTrap(std::string const & name)
{
	log("ClapTrap Constructor with string called");
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& otherObject)
{
	log("Claptrap Copy constructor called");
	this->name = otherObject.name;
	this->level = otherObject.level;
	this->hitPoints = otherObject.hitPoints;
	this->maxHitPoints = otherObject.maxHitPoints;
	this->energyPoints = otherObject.energyPoints;
	this->meleeDamage = otherObject.meleeDamage;
	this->armorDamageReduction = otherObject.armorDamageReduction;
}

ClapTrap::~ClapTrap()
{
	log("ClapTrap Destructor was called");
}


void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CLP-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangedDamage << " points of damage";
	std::cout << std::endl;
}


void ClapTrap::meleeAttack(std::string const & target) 
{
	std::cout << "CLP-TP " << name << " attacks " << target;
	std::cout << " close up, causing " << meleeDamage << " points of damage";
	std::cout << std::endl;	
}


// **
void ClapTrap::takeDamage(unsigned int amount)
{
	log("ClapTrap takeDamage member function called");
	unsigned int totalDamage =  (energyPoints - (amount - armorDamageReduction));
	if ( totalDamage > 0){
		energyPoints -= (amount / armorDamageReduction);
	}
	else {
		energyPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	log("ClapTrap beRepaired member function");
	unsigned int tmp = (energyPoints + amount);

	if (tmp < maxEnergyPoints){
		energyPoints += amount;
	}
	else{
		energyPoints = maxEnergyPoints;
	} 
}
