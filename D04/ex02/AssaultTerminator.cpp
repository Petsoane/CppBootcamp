#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl

AssaultTerminator::AssaultTerminator()
{
	log("* teleports from space *");
}

AssaultTerminator::AssaultTerminator(AssaultTerminator& otherObj)
{
	otherObj.battleCry();
	log("cloned");
}

AssaultTerminator::~AssaultTerminator()
{
	log("I'll be back");
}

void AssaultTerminator::battleCry() const 
{
	log("This cose is unclean. PURIFY IT !");
}

void AssaultTerminator::rangedAttack() const
{
	log("* Super bad shot to the gut *");
}

void AssaultTerminator::meleeAttack() const
{
	log("* attacks with chainfists *");
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}