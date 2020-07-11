#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include "ExtraClasses/RandomWord.hpp"

int main(void)
{
	Zombie z1;
	Zombie z2 ("Lebo", "Weakling");
	ZombieEvent creator;
	// Set the type of the zombies
	creator.setZombieType("New Killer Kind...");
	// Create a new Zombie with the given type
	Zombie *t1 = creator.newZombie("Miuei");

	// Testing out whats what....
	z1.announce();
	z2.announce();
	t1->announce();

	creator.randomChump();
	delete t1;


	// Testing random word
	// std::string tmp[3] = {"t", "r", "e"};
	// RandomWord myRand (tmp, 3);
	// std::cout << myRand.nextWord() << std::endl;

	return (0);
}