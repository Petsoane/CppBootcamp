#ifndef ISPACEMARINE
#define ISPACEMARINE

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {};

	// Returns a copy of the currenbt object
	virtual ISpaceMarine* clone() const = 0;
	// displays something on the screen
	virtual void battleCry() const = 0;
	// displays ranged attack string of the marine
	virtual void rangedAttack() const = 0;
	// display melee attack string of the marine
	virtual void meleeAttack() const = 0; 
};

#endif