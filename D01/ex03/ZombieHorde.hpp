#ifndef ZHORDE
#define ZHORDE

#include <iostream>
#include <string>
#include <vector>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
private:
	Zombie *horde;
	int size;
};

#endif