#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl;

Character::Character(std::string const& name)
{
	this->name = name;
	ap = 40;
	wpn = 0;
}

Character::Character(const Character& otherObj)
{
	this->name = otherObj.name;
	this->ap = otherObj.ap;
	this->wpn = otherObj.wpn;
}

Character::~Character()
{
	delete wpn;
}

void Character::recoverAP()
{
	if (ap < 40) ap += 10;
}

void Character::equip(AWeapon* wpn)
{
	if (this->wpn == nullptr)
		delete this->wpn;
	this->wpn = wpn;
}

void Character::attack(Enemy* enemy)
{
	if ( (this->wpn != nullptr) && (this->ap >= wpn->getAPCost()) ){
		log(name << " attacks " << enemy->getType() << " with a " << wpn->getName());
		
		wpn->attack();
		this->ap -= wpn->getAPCost();

		enemy->takeDamage(wpn->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::string const & Character::getName()
{
	return this->name;
}

int Character::getAP()
{
	return ap;
}

AWeapon const * Character::getWeapon()
{
	if (wpn) return wpn;
	else return 0;
}

std::ostream& operator<<(std::ostream& o, Character& obj)
{
	AWeapon const *wpn = obj.getWeapon();
	std::string wpnName = "None";

	if (wpn)
		wpnName = wpn->getName();
	o << obj.getName() << " has " << obj.getAP() << " AP and " << wpnName;
	o << std::endl;
	obj.getName();
	return o;
}