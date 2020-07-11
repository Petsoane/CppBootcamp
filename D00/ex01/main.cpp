#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "classes/contact.h"

using namespace std;

// Function prototypes
void search(const Contact contacts[], int allContacts);

int main(void)
{
	Contact contacts[8];
	string input;
	int addedContacts = 0;


	while (1){
		cout << "contacts: ";
		cin >> input;

		if (input == "exit") break;
		else if (input == "add"){
			if (addedContacts == 7)
				cout << "the book is full" << endl;
			else{
				contacts[addedContacts].addDetails();
				addedContacts++;
			}
		}
		else if(input == "search") search(contacts, addedContacts);
		// if (input == "search") search(contacts);
	}

	return (0);
}

void search(const Contact contacts[], int allContacts)
{
	Contact tmp;
	int index;

	for (int i = 0; i < allContacts; i++){
		tmp = contacts[i];
		cout << i << setw(10) << "| " <<  tmp.firstName << setw(10) << "| " << setw(10) <<  tmp.lastName << " |" << setw(10) << tmp.nickName;
		cout << endl;
	}

	cout << "Which contact would you like to see?: ";
	cin >> index;
	if (!cin){
		cout << "Invalid input" << endl;
		cin.clear();
		return;
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (index >= allContacts){
		cout << "No such phone number" << endl;
		return;
	}

	tmp = contacts[index];
	cout <<  tmp.firstName << endl;
	cout <<  tmp.lastName << endl;
	cout <<  tmp.nickName << endl;
	cout <<  tmp.login << endl;
	cout <<  tmp.postal << endl;
	cout <<  tmp.address << endl;
	cout <<  tmp.email << endl;
	cout <<  tmp.phoneNumber << endl;
	cout <<  tmp.birthday << endl;
	cout <<  tmp.favMeal << endl;
	cout <<  tmp.underwearColor << endl;
	cout <<  tmp.darkestSecret << endl;
}

