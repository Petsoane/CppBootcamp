#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>


inline void log(std::string const & msg)
{
	std::cout << msg << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name)
{
	log("NinjaTrap constructor called");
	this->level = 1;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 1200;
	this->maxEnergyPoints = 120;
	this->meleeDamage = 60;
	this->rangedDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap & otherObject) : ClapTrap(otherObject)
{
	log("NinjaTrap cop constructor called");
}

NinjaTrap::~NinjaTrap()
{
	log("NinjaTrap destructor called");
	
}

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja-TP " << name << " attacks " << target;
	std::cout << " at range, causing " << rangedDamage << " points of damage";
	std::cout << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja-TP " << name << " attacks " << target;
	std::cout << " close up, causing " << meleeDamage << " points of damage";
	std::cout << std::endl;	
}

void NinjaTrap::ninjaShoeBox(ClapTrap& tp)
{
	tp.meleeAttack(name);
	log("{Smoke Bomb}");
	meleeAttack("ClapTrap bot");
}


void NinjaTrap::ninjaShoeBox(FragTrap& tp)
{
	tp.meleeAttack(name);
	log("{Smoke Bomb}");
	meleeAttack("FragTrap bot");
}


void NinjaTrap::ninjaShoeBox(ScavTrap& tp)
{
	tp.meleeAttack(name);
	log("{Smoke Bomb}");
	meleeAttack("ScavTrap bot");
}



void NinjaTrap::ninjaShoeBox(NinjaTrap& tp)
{
	tp.meleeAttack(name);
	log("{Smoke Bomb}");
	meleeAttack("NinjaTrap bot");
}