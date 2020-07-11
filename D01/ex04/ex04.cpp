#include <iostream>
#include <string>

int main(void)
{
	std::string random;

	random = "HI THIS IS BRAIN";
	std::string *prandom = &random;
	std::string &rrandom =  random;

	std::cout << "Normal string " << random << std::endl;
	std::cout << "Pointer string " << *prandom << std::endl;
	std::cout << "Reference string " << rrandom << std::endl;

	return (0);
}