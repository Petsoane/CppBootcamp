#ifndef CURE
#define CURE

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure&);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter&);
};

#endif