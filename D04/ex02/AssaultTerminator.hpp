#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator&);
	virtual ~AssaultTerminator();

	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ISpaceMarine* clone() const ;
};

#endif