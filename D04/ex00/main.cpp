#include "Socerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

int main(void)
{

	Socerer robert("Robert", "The Magnificent");

	Victim jim("Jimmy");
	Peon joe("joe");


	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);


	return (0);
}