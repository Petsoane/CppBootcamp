#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>


int main(void)
{

	FragTrap first("inic");
	ScavTrap second("manic");

	first.rangedAttack("the wall");
	first.meleeAttack(" the ground ");
	second.rangedAttack("The sky");
	second.meleeAttack("The clouds");

	first.takeDamage(5);
	first.status();
	first.beRepaired(5);
	first.status();

	second.takeDamage(5);
	// second.status();
	second.beRepaired(5);
	// first.status();

	first.vaulthunter_dot_exe("random choice");
	second.challangeNewcomer("random chump");
	return (0);
}