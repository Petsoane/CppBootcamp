#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


void fileRead(std::string filename)
{
	std::string line;


	if (filename == "-"){
		while (getline(std::cin, line)){
			std::cout << line << std::endl;
		}
		return;
	}

	std::ifstream file {filename};
	

	if (!file){
		std::cout << "Failed opening the file" << std::endl;
		return;
	}

	

	while (getline(file, line)){
		std::cout << line << std::endl;
	}

	file.close();
}

int main(int argc, char **argv)
{
	std::string input;

	if (argc > 1){
		for (int i = 1; i < argc; i++){
			// std::cout << argv[i] << std::endl;
			fileRead(argv[i]);
		}
	}
	else{
		while (getline(std::cin, input)){
			std::cout << input << std::endl;
		}
	}

	
	return (0);
}