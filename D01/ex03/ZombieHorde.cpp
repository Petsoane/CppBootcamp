#include <iostream>
#include <string>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	// this->setName("i'm in the horde girls");
	horde = new Zombie[n];
	size = n;

}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}


void ZombieHorde::announce()
{
	for(int i = 0; i < size; i++)
	{
		horde[i].announce();
	}
}