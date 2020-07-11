#include "Fixed.hpp"
#include <iostream>
#include <string>


int main(void)
{

	Fixed a;
	Fixed  b (10);
	Fixed  c (42.42f);
	Fixed  d (b);


	a = Fixed(1234.4321f);

	std::cout << (d != b) << std::endl;

	std::cout << b++ << std::endl;

	return (0);
}