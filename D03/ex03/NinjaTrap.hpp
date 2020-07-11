#ifndef NINJATRAP
#define NINJATRAP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap
{
public:
	//=> Constructors and destructors
	NinjaTrap(std::string const & name);
	NinjaTrap(const NinjaTrap & otherObject);
	~NinjaTrap();
	//=> Member functions
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void ninjaShoeBox( ClapTrap& tp);
	void ninjaShoeBox( FragTrap& tp);
	void ninjaShoeBox( ScavTrap& tp);
	void ninjaShoeBox( NinjaTrap& tp);

};

#endif