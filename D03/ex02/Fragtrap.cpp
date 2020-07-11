#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>


inline void log(std::string msg)
{
	std::cout << msg << std::endl;
}


FragTrap::FragTrap(std::string const & name): ClapTrap(name)
{
	log("FragTrap Constructor called");
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
FragTrap::FragTrap(const FragTrap& otherObject) : ClapTrap(otherObject)
{
	log("FragTrap Copy constructor called");
}

FragTrap::~FragTrap()
{
	log("FragTrap Destructor was called");
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
	log("FragTrap takeDamage member function called");
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
	log("FragTrap beRepaired member function");
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
	log("FragTrap vaulthunter_dot_exe \n");
	int choice;

	srand(time(NULL));
	choice = rand() % 2;


	if (choice == 0){
		meleeAttack(target);
	}
	else{
		rangedAttack(target);
	}

	log("FragTrap vaulthunter_dot_exe \n");
	
}

void FragTrap::status() const
{
	log("FragTrap  [ENERGEY STATUS] ");
	std::cout << energyPoints << std::endl;
	log("FragTrap  [END OF STATUS]");
}