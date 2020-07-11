#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "ExtraClasses/RandomWord.hpp"

// static memeber variables
std::string ZombieEvent::zombieNames[3] = {
	"Dreary Dudlies",
	"Weasels",
	"Walkie Talkies"
};


// Functions
ZombieEvent::ZombieEvent()
{
	// srand(time(NULL));
	myRand = new RandomWord(ZombieEvent::zombieNames, 3);
	type = "Dreary Dudlies";
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

void ZombieEvent::randomChump()
{
	const std::string randoType = "Im a Normo...";
	std::string currentType;
	Zombie *z;

	currentType = this->type;
	this->type = randoType;

	z = newZombie(nextRandomName());
	z->announce();
	delete z;

	this->type = currentType;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->type);
}

std::string ZombieEvent::nextRandomName()
{
	std::string name;
	name = myRand->nextWord();
	return name;
}