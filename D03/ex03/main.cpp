#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>


int main(void)
{

	FragTrap first("inic");
	// ScavTrap second("manic");
	NinjaTrap third("vidiv");

	/* FragTrap usage */
	// first.rangedAttack("the wall");
	// first.meleeAttack(" the ground ");

	// first.takeDamage(5);
	// first.beRepaired(5);;


	/* ScavTrap usage */
	// second.rangedAttack("The sky");
	// second.meleeAttack("The clouds");

	// second.takeDamage(5);
	// second.beRepaired(5);


	/* NinjaTrap usage */
	third.rangedAttack("the wall");
	third.meleeAttack(" the ground ");


	/* Ninjatrap usage */
	third.takeDamage(5);
	third.beRepaired(5);;

	/* Special moves */
	// first.vaulthunter_dot_exe("random choice");
	// second.challangeNewcomer("random chump");
	third.ninjaShoeBox(first);
	return (0);
}