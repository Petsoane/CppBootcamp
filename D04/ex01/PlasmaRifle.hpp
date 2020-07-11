#ifndef PLASMARIFLE
#define PLASMARIFLE

#include <string>
#include "AWeapon.hpp"


class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	virtual void attack()  ;
};

#include <iostream>
#define log(x) std::cout << x << std::endl

#endif