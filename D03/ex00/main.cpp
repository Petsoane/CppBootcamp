#include "FragTrap.hpp"
#include <string>
#include <iostream>


int main(void)
{

	FragTrap first("inic");


	first.rangedAttack("the wall");
	first.meleeAttack(" the ground ");


	first.takeDamage(5);
	first.status();
	first.beRepaired(5);
	first.status();

	first.vaulthunter_dot_exe("random choice");
	return (0);
}