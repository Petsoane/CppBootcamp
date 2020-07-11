#ifndef ISQUAD
#define ISQUAD

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	// Gets the numbr of units in the squad.
	virtual int getCount() const = 0;
	// returns a pointer to the unit att "Nth" position
	virtual ISpaceMarine* getUnit(int) const = 0;
	// Adds the a marine to the end, and returns the new count.
	virtual int push(ISpaceMarine*) = 0;
};

#endif