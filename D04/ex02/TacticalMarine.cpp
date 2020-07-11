#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


TacticalMarine::TacticalMarine()
{
	log("Tactical Marine ready for battle");
}

TacticalMarine::TacticalMarine(TacticalMarine& otherObj)
{
	otherObj.battleCry();
	log("The marine was copied");
}

TacticalMarine::~TacticalMarine()
{
	log("Aargh....");
}

void TacticalMarine::battleCry() const
{
	log("For the holy GRAIL !");
}

void TacticalMarine::rangedAttack() const
{
	log("* attacks with bolter *");
}

void TacticalMarine::meleeAttack() const
{
	log("* attacks with chainsword *");
}

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine();
}