#ifndef HUMANB
#define HUMANB

#include <string>
#include "Weapon.hpp"
#include "HumanBase.hpp"

class HumanB: public HumanBase
{
public:
	HumanB(std::string name);
	void setWeapon(Weapon& wpn);
};

#endif