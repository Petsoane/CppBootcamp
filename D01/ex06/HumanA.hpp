#ifndef HUMANA
#define HUMANA

#include <string>
#include "Weapon.hpp"
#include "HumanBase.hpp"

class HumanA: public HumanBase
{
public:
	HumanA(std::string name, Weapon& wpn);
};

#endif