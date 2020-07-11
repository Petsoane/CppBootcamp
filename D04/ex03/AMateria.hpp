#ifndef AMATERIA
#define AMATERIA

#include <string>
#include <iostream>
// #include "ICharacter.hpp"

class ICharacter;
class AMateria
{
public:
	AMateria(std::string const & type);
	AMateria(AMateria& otherObj);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const =0;
	virtual void use(ICharacter&);

	AMateria& operator=(const AMateria&);

private:
	std::string type;
	unsigned int xp_;
};

#endif