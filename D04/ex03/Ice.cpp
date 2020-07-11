#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


Ice::Ice(): AMateria("ice")
{

}


Ice::Ice(Ice& otherObj): AMateria(otherObj)
{

}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	AMateria* tmp = new Ice;

	return tmp;
}

void Ice::use(ICharacter& target)
{
	log("* shoots an ice bolt at " << target.getName() << " *");
}