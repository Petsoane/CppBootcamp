#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <array>
#include <iostream>

#define log(x) std::cout << x << std::endl


MateriaSource::MateriaSource()
{
	materias.fill(0);
	// log("Source of materia is granted");
}

MateriaSource::MateriaSource(MateriaSource& otherObj)
{
	this->materias = otherObj.materias;
}

MateriaSource::~MateriaSource()
{
	// log("materia Source destroyed ");
}

void MateriaSource::learnMateria(AMateria* mat)
{
	// log("learning new materia");
	if (size < 4){
		AMateria* tmp = mat;

		materias[size++] = tmp;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* tmp = 0;

	if (size == 0) return (0);


	for (int i = 0; i < size; i++){
		if (materias[i]->getType() == type){
			tmp = materias.at(i);
			break;
		}
	}


	return (tmp);
}