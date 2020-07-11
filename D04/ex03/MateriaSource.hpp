#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"
#include <string>
#include <array>


// Class prototypes
class AMateria;

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource&);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const &);
private:
	std::array<AMateria*, 4> materias;
	int size;

};
#endif