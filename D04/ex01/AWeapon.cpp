#include "AWeapon.hpp"
#include <string>
#include <iostream>

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon& otherObj)
{
	this->name = otherObj.name;
	this->apcost = otherObj.apcost;
	this->damage = otherObj.damage;
}

AWeapon::~AWeapon()
{
	// std::cout << "test" << std::endl;
}

int AWeapon::getDamage() const
{
	return damage;
}

void AWeapon::setDamage(int amount)
{
	this->damage = amount;
}

int AWeapon::getAPCost() const
{
	return apcost;
}

void AWeapon::setAPCost(int apcost)
{
	this->apcost = apcost;
}

std::string const & AWeapon::getName() const
{
	return name;
}

void AWeapon::setName(std::string const & name)
{
	this->name = name;
}