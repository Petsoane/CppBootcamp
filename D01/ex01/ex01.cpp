#include <iostream>
#include <string>

void		memoryLeak()
{
	std::string*		panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int main(void)
{
	// This mayble can be tested with valgrind.
	memoryLeak();

	return (0);
}