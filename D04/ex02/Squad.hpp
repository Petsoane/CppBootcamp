#ifndef SQUAD
#define SQUAD

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>
#include <vector>


class Squad: public ISquad
{
public:
	Squad();
	Squad(Squad& otherObj);
	virtual ~Squad();

	virtual int getCount() const;
	virtual int push(ISpaceMarine*);
	virtual ISpaceMarine* getUnit(int) const;

private:
	std::vector<ISpaceMarine*> unit;
};

#endif