#ifndef TACTICALMARINE
#define TACTICALMARINE

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>


class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine&);
	virtual ~TacticalMarine();

	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ISpaceMarine* clone() const ;

};

#endif