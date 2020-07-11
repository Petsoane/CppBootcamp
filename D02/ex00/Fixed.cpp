#include "Fixed.hpp"
#include <iostream>
#include <string>



inline void log(std::string output)
{
	std::cout << output << std::endl;
}


Fixed::Fixed()
{
	log("Default constructor called");
	value = 0;
}

Fixed::~Fixed()
{
	log("Destructor called");
}

// Copy constructor.
Fixed::Fixed(Fixed& otherObject)
{
	log("Copy constructo called");
	// value = otherObject.value;
	 setRawBits(otherObject.getRawBits());
	// value = otherObject.value;
	// (*this) = otherObject;
}

Fixed& Fixed::operator=(Fixed& otherObject)
{
	log("Assingment opperator called");
	value = otherObject.getRawBits();

	return *this;
}

int Fixed::getRawBits()
{
	log("getRawBits member fucntion called");
	return value;
}

void Fixed::setRawBits(const int value)
{
	log("setRawBits member function called");
	this->value = value;
}