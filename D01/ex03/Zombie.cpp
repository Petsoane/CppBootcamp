#include <iostream>
#include <string>
#include "Zombie.hpp"
#include <ctime>

Zombie::Zombie()
{
	std::string names[3] = {"Phill", "Naifk", "Freddy"};

	srand(100);

	myRand = new RandomWord(names, 3);
	name = myRand->nextWord();
	type = "Random gunk..." ;
	say = "I Want your Braaaaaiiiiinnnnnns..... Maybe im, not sure...";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	this->say = "Yet another testing string";
}

// Zombie::~Zombie()
// {
// 	// delete this->myRand;
// }

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type  << ")> "<< say << std::endl;
	return;
}

void Zombie::setSaying(std::string saying)
{
	this->say = saying;
}

std::string Zombie::getName()
{
	return name;
}

std::string Zombie::getType()
{
	return type;
}