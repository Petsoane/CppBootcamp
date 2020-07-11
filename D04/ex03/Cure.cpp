#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


Cure::Cure(): AMateria("cure")
{}

Cure::Cure(Cure& otherObj): AMateria(otherObj)
{}

Cure::~Cure()
{
	log("Ther cure is no more");
}

AMateria* Cure::clone() const
{
	AMateria* tmp = new Cure;

	return tmp;
}

void Cure::use(ICharacter& target)
{
	log("* heals " << target.getName() << "'s wounds *");
}