#ifndef ICE
#define ICE

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice&);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter&);
};
#endif