#include "Enemy.hpp"
#include <string>
#include <iostream>


Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;

	// std::cout << "* click click click" << std::endl;
}

Enemy::Enemy(const Enemy& otherObj)
{
	this->hp = otherObj.hp;
	this->type = otherObj.type;
}

Enemy::~Enemy()
{
	// std::cout << "* SPROTCH *" << std::endl;
}

void Enemy::takeDamage(int amount)
{
	if (hp > 0)
	{
		if ((hp - amount) > 0) hp -= amount;
		else hp = 0;
	}
}

std::string const& Enemy::getType()
{
	return type;
}

void Enemy::setType(std::string const & type)
{
	this->type = type;
}

int Enemy::getHP()
{
	return hp;
}

void Enemy::setHP(int hp)
{
	this->hp = hp;
}
