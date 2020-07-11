#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

#define log(x) std::cout << x << std::endl


AMateria::AMateria(std::string const & type)
{
	this->type = type;
	this->xp_ = 0;
}

AMateria::AMateria(AMateria& otherObj)
{
	// this->type = otherObj.type;
	this->xp_ = otherObj.xp_;
}

AMateria::~AMateria()
{
	log("Material has been destroyed");
}


std::string const & AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->xp_;
}


void AMateria::use(ICharacter& target)
{
	log(this->type << " shoots harmless lights at " << target.getName());
}


AMateria& AMateria::operator=(const AMateria& otherObj)
{
	this->type = otherObj.type;
	this->xp_ = otherObj.xp_;

	return *this;
}