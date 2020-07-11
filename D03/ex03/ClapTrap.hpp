#ifndef CLAPTRAP
#define CLAPTRAP

#include <string>


class ClapTrap
{
public:
	ClapTrap(std::string const & name);
	ClapTrap(const ClapTrap& otherObject);
	ClapTrap();
	~ClapTrap();
	// member function;
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
protected:
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