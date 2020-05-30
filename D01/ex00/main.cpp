#include "classes/Pony.hpp"
#include <iostream>
#include <string>

// function prototype
void ponyOnTheStack();
void ponyOnTheHeap();


int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

void ponyOnTheHeap()
{
	std::cout << "This is the heap pony" << std::endl;
	Pony *pony = new Pony();

	pony->ponyAway();
	delete pony;
	return;
}

void ponyOnTheStack()
{
	std::cout << "This is the stack pony" << std::endl;
	Pony pony;

	pony.ponyAway();
	return;
}