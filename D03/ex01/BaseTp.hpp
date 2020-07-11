#ifndef BASETP
#define BASETP

#include <string>

class BaseTp
{
public:
	virtual void rangedAttack(std::string const & target)=0;
	virtual void meleeAttack(std::string const & target)=0;
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
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