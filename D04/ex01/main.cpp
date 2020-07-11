#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl

int main(void)
{
	Character* zaz = new Character("Zaz");

	std::cout << (*zaz);

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	// log("Pos a");
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	// log("end of pos a");

	// log("Pos b");
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	// log("end of pos b");
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	return (0);
}