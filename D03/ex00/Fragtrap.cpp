#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>


inline void log(std::string msg)
{
	std::cout << msg << std::endl;
}


FragTrap::FragTrap(std::string const & name)
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

FragTrap::FragTrap(const FragTrap& otherObject)
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

FragTrap::~FragTrap()
{
	log("Destructor was called");
}


void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangedDamage << " points of damage";
	std::cout << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target;
	std::cout << " close up, causing " << meleeDamage << " points of damage";
	std::cout << std::endl;	
}


// **
void FragTrap::takeDamage(unsigned int amount)
{
	log("takeDamage member function called");
	unsigned int totalDamage =  (energyPoints - (amount - armorDamageReduction));
	if ( totalDamage > 0){
		energyPoints -= (amount / armorDamageReduction);
	}
	else {
		energyPoints = 0;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	log("beRepaired member function");
	unsigned int tmp = (energyPoints + amount);

	if (tmp < maxEnergyPoints){
		energyPoints += amount;
	}
	else{
		energyPoints = maxEnergyPoints;
	} 
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	log("vaulthunter_dot_exe \n");
	int choice;

	srand(time(NULL));
	choice = rand() % 2;


	if (choice == 0){
		meleeAttack(target);
	}
	else{
		rangedAttack(target);
	}

	log("vaulthunter_dot_exe \n");
	
}

void FragTrap::status() const
{
	log(" [ENERGEY STATUS] ");
	std::cout << energyPoints << std::endl;
	log(" [END OF STATUS]");
}