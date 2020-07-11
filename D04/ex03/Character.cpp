#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <array>
#include <iostream>

#define log(x) std::cout << x << std::endl


Character::Character(std::string const & name)
{
	this->name = name;
	this->size = 0;
	// materias.fill(0);
}

Character::Character(Character& otherObj)
{
	this->name = otherObj.name;
	AMateria* tmp;
	// AMateria* copy;

	for (unsigned int i = 0; i < materias.size(); i++){
		tmp = materias[i];
		otherObj.equip(tmp);
	}
}

Character::~Character()
{
	// log("The character is dead");
}

std::string const & Character::getName() const 
{
	return this->name;
}

void Character::equip(AMateria* mat)
{
	if (size < 4){
		materias[size++] = mat;
	}
}

void Character::unequip(int idx)
{
	if (idx > 0 && idx < 4){
		materias[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4){
		// log("There could be a valid materia");
		AMateria* tmp = materias.at(idx);

		if (tmp != 0){
			// log("The materia was found");
			tmp->use(target);
		}
	}
}