#include "BaseTp.hpp"
#include <string>

// **
void BaseTp::takeDamage(unsigned int amount)
{
	unsigned int totalDamage =  (energyPoints - (amount - armorDamageReduction));
	if ( totalDamage > 0){
		energyPoints -= (amount / armorDamageReduction);
	}
	else {
		energyPoints = 0;
	}
}

void BaseTp::beRepaired(unsigned int amount)
{
	unsigned int tmp = (energyPoints + amount);

	if (tmp < maxEnergyPoints){
		energyPoints += amount;
	}
	else{
		energyPoints = maxEnergyPoints;
	} 
}
