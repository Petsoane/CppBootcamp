#include "classes/Pony.hpp"
#include <iostream>
#include <string>

// function prototype
void ponyOnTheStack();
void ponyOnTheHeap();


int main(void)
{

	// @Find out how to track memory locations in cpp, and maybe other languages.
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}


/**
	This allocates a pony on the heap. From my understanding, in cpp
	a class, by default is created on the stack automatically (there is no need 
	for the new keyword). But if you want to create a class, or anyother object on, 
	the heap, you have to use the new keyword.
*/
void ponyOnTheHeap()
{
	std::cout << "This is the heap pony" << std::endl;
	// The new keyword is like malloc'ing a memory space yourself.
	// That in turn means that you also have to be careful of memory leaks.
	//  Free your leaks always, immediatly after your done using the object.
	Pony *pony = new Pony();

	// A pointer to an object is simmilar to a pointer to a structure.... 
	// Meaning you have to use the '->' symbol to access member functions.
	// This is a cpp thing.
	pony->ponyAway();

	// use the keyword delete to remove the malloced memory.
	delete pony;
	return;
}

/**
	This function will allocate memory automatically of the stack and free it once
	its out of scope.
*/
void ponyOnTheStack()
{
	std::cout << "This is the stack pony" << std::endl;
	Pony pony;

	pony.ponyAway();
	return;
}