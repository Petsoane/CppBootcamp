#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>


inline void log(std::string output)
{
	std::cout << output << std::endl;
}


// => Member functions
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

int Fixed::toInt() const 
{
	int retVal;

	scallingFactor();
	retVal =(int) (value / scallingFactor());

	if (retVal < 0)
		retVal *= -1;

	return (retVal);
}

float Fixed::toFloat() const
{
	float retVal;


	retVal = (float)(value / scallingFactor());

	return (retVal);
}

inline int Fixed::scallingFactor() const
{
	// log("inside the scalling factor");
	// std::cout << (2 << 8) << std::endl;
	return (256);
}

// => Ccmnstructors and destructors
Fixed::Fixed()
{
	log("Default constructor called");
	value = 0;
}

Fixed::Fixed(int init)
{
	value = init * scallingFactor();
}

Fixed::Fixed(float init)
{
	// value = (int)(init * 8);
	value = roundf(init * scallingFactor());
}

// Copy constructor.
Fixed::Fixed(const Fixed& otherObject)
{
	log("Copy constructo called");
	value = otherObject.value;
	 // setRawBits(otherObject.getRawBits());
	// value = otherObject.value;
	// (*this) = otherObject;
}

// Destructor.
Fixed::~Fixed()
{
	log("Destructor called");
}


// => Operator overloads.
Fixed& Fixed::operator=(const Fixed& otherObject)
{
	log("Assingment opperator called");
	// value = otherObject.getRawBits();
	value =- otherObject.value;
	return *this;
}


bool Fixed::operator>(const Fixed& otherObject)
{
	return toFloat() > otherObject.toFloat();
}


bool Fixed::operator<(const Fixed& otherObject)
{
	return toFloat() < otherObject.toFloat();
}

bool Fixed::operator==( Fixed& otherObject)
{
	return toFloat() == otherObject.toFloat();
}

bool Fixed::operator<=(const Fixed& otherObject)
{
	return value <= otherObject.value;
}

bool Fixed::operator>=(const Fixed& otherObject)
{
	return value >= otherObject.value;
}

bool Fixed::operator!=(const Fixed& otherObject)
{
	return toFloat() != otherObject.toFloat();
}

Fixed Fixed::operator+(Fixed& otherObject)
{
	int val;
	Fixed tmp;

	val = value + otherObject.value;
	tmp.value = val;

	return tmp;
}

Fixed Fixed::operator-(Fixed& otherObject)
{
	int val;
	Fixed tmp;

	val = value - otherObject.value;
	tmp.value = val;
	return tmp;
}

Fixed Fixed::operator*(Fixed& otherObject)
{
	int val;
	Fixed tmp;

	val = ((long)value * (long)otherObject.value) / 256;

	tmp.value = val;

	return tmp;
}

Fixed Fixed::operator/(Fixed& otherObject)
{
	int val;
	Fixed tmp;

	val = ((long)value * 256) / otherObject.value;

	tmp.value = val;

	return tmp;
}


Fixed Fixed::operator++()
{
	value += resolution;

	return *this;
}

Fixed Fixed::operator++(int k)
{
	Fixed tmp (*this);

	value += resolution + k;

	return tmp;

}

Fixed Fixed::operator--()
{
	if (value > 0)
		value -= resolution;
	return (*this);
}

Fixed Fixed::operator--(int k)
{
	Fixed tmp (*this);

	value += resolution + k;
	return tmp;
}


std::ostream& operator<<(std::ostream& cout, const Fixed& obj)
{
	float val = ((float) obj.value) / 256;

	if (val < 0)
		val *= -1;

	cout << val;

	return cout;
}
