#include "Human.hpp"
#include <string>
#include <iostream>



void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	int functionIndex;
	const int FUNC_COUNT = 3;
	static std::string functionNames[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void (Human::*funcs[3])(std::string const &);


	/**
	 In order get the address of a member function in cpp,
	 you have to use the scope resolution operator with the class name and
	 the function name.
	*/
	funcs[0] = &Human::meleeAttack;
	funcs[1]= &Human::rangedAttack;
	funcs[2] = &Human::intimidatingShout;


	functionIndex = -1;
	for (int i = 0; i < FUNC_COUNT; i++){
		if (action_name == functionNames[i]){
			functionIndex = i;
			break;
		}
	}

	/**
		This 'if' statement is here because I did not want to add more functions
		into the class that was given. Although if I did it would still be valid.
		[side note (only if your interested)]:
			to remove this if, I would define a default fucntion that would print
			out a set message to the screen and then set the default value of 
			functionIndex to the position of this default function.
	*/
	if (functionIndex == -1) return;


	/**
	 In order to call a member function through a pointer variable,
	 the pointer variable must first be qualified with the current instance of the
	 class/object.
	*/
	(this->*funcs[functionIndex])(target);

}