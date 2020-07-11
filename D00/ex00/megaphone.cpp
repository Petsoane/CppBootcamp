#include <iostream>
#include <string>
#include <cstring>

#define DEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void capString(string str);

int main(int argc, char **argv)
{
	if (argc >= 2){
		for (int i = 1; i < argc; i++){
			capString(argv[i]);
		}
	}
	else {
		cout << DEFAULT;
	}
	cout << endl;
	return 0;
}

void capString(string str)
{
	for(int i = 0; i < str.length(); i++){
		cout << static_cast<char>(toupper(str[i]));
	}
	cout << " ";
}