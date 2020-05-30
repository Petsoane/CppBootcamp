#include "../classes/contact.h"
#include <iostream>
#include <string>
#include <limits>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// function prototypes
void flush (std::istream& in);

void Contact::addDetails()
{
	cout << "Add Details" << endl;
	flush(cin);
	cout << "Enter first name(s): ";
	getline(cin, firstName);
	cout << "Enter last name: ";
	getline(cin, lastName);
	cout << "Enter nickname: ";
	getline(cin, nickName);
	cout << "Enter login: ";
	cin >> login;
	cout << "Enter your postal code: ";
	cin >> postal;
	// check and clear the state of the input stream
	flush(cin);
	cout << "Enter your address: ";
	getline(cin, email);
	cout << "Enter your phone number: ";
	getline(cin, phoneNumber);
	cout << "Enter your birthday: ";
	getline(cin, birthday);
	cout << "Enter your favourite meal: ";
	getline(cin,favMeal);
	cout << "Enter your underwear color (the one your wearing now): ";
	cin >> underwearColor;
	// check and clear the state of the input.
	flush(cin);
	cout << "Enter your darkest secrete (keep it dark please): ";
	getline(cin, darkestSecret);
	cout << "Done input" << endl;
	return;
}

void flush(std::istream& in)
{
	if (!in){
		cout << "Invalid input" << endl;
		in.clear();
	}
	in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}