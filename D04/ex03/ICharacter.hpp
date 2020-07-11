#ifndef ICHARACTER
#define ICHARACTER

#include <string>
// #include "AMateria.hpp"

// THis is used as a class protoype if there is class interdependecy.
class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}

	virtual std::string const & getName() const =0;
	virtual void equip(AMateria*) =0;
	virtual void unequip(int)=0;
	virtual void use(int, ICharacter& target) =0;
};

#endif
