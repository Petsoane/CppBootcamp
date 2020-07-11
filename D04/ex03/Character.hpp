#ifndef CHARACTER
#define CHARACTER

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <array>

class Character: public ICharacter
{
public:
	Character(std::string const & name);
	Character(Character&);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria*);
	virtual void unequip(int idx);
	virtual void use(int, ICharacter& target);

private:
	std::string name;
	std::array<AMateria*, 4> materias;
	int size;
};


#endif