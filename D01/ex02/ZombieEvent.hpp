#ifndef ZOMBIEEVENT
#define ZOMBIEEVENT

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ExtraClasses/RandomWord.hpp"

// This class will act as a factory of sorts..
class ZombieEvent
{
public:
	void setZombieType(std::string type);
	// Creates newZombie with the given name.
	Zombie* newZombie(std::string name);
	// create a random zombie and remove it.
	void randomChump();
	ZombieEvent();
private:
	RandomWord *myRand;
	// This is type for all Zombies created from this instance.
	std::string type;
	std::string nextRandomName();
	static std::string zombieNames[3];
};

#endif