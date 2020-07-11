#ifndef HUMAN
#define HUMAN


#include <string>
#include "Weapon.hpp"

class HumanBase
{
public:
	void attack();
	HumanBase();
protected:
	Weapon *wpn;
	std::string name;

};

#endif