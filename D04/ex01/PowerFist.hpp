#ifndef POWERFIST
#define POWERFIST


#include <string>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	PowerFist( PowerFist& otherObj);
	virtual ~PowerFist();
	virtual void attack();
};

#endif