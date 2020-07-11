#ifndef FRAG_TRAP
#define FRAG_TRAP


#include <string>

class FragTrap
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

private:
	std::string name;
	unsigned int level;
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int meleeDamage;
	unsigned int rangedDamage;
	unsigned int armorDamageReduction;

};

#endif