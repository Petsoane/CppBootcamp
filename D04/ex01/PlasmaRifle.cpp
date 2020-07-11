#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 23)
{
	log("PlasmaRifle created");
}

void PlasmaRifle::attack() 
{
	std::cout << "* pioou piouu piouu" << std::endl;
}