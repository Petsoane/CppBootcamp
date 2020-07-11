#ifndef FRAG_TRAP
#define FRAG_TRAP


#include <string>
#include "BaseTp.hpp"


class FragTrap: public BaseTp 
{
public:	
	// => Constructors.
	FragTrap(std::string const & name);
	FragTrap(const FragTrap& otherObject);
	~FragTrap();
	// => Member functions
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	void status() const ;

};

#endif