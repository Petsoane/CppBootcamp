#ifndef SCAVCTRAP
#define SCAVCTRAP

#include "BaseTp.hpp"
#include <string>

class ScavTrap : public BaseTp
{
public:
	ScavTrap(std::string const & name);
	ScavTrap(const ScavTrap& otherObject);
	~ScavTrap();
	// inherited functions
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challangeNewcomer(std::string const & target);

};

#endif