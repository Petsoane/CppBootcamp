#include "replace.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


// this function could also return an integer defining the state of the operations
void replace(std::string filename, std::string s1, std::string s2)
{
	// check if the s1 and s2 are not empty.
	if (s1.empty() || s2.empty()){
		error("Invalid input value");
		return;
	}

	// open the files. and make sure that each file is valid.
	std::ifstream srcFile {filename , std::ios::in};
	if (!srcFile){
		error("Could not open the source file...");
		return;
	}
	std::string dstFileName = filename+ "." + "replace";
	std::ofstream dstFile {dstFileName};
	if (!dstFile){
		error("Could not open the destination file");
	}

	// copy the contents of file1 into file2.
	std::string tmp;
	while ( std::getline( srcFile, tmp) ){

		dstFile << swap(tmp, s1, s2) << std::endl;
		if (!dstFile){
			error("There is a problem with the copying");
		}
	}

	srcFile.close();
	dstFile.close();

}

// This function does not retain the fedility of the string.
// It loses the whitespaces.... I need to fix that after a little perusing 
// of the internet.
std::string swap(std::string line, std::string s1, std::string s2)
{
	std::string outline = "";
	std::stringstream ss (line);
	std::string tmp;

	while (ss >> tmp){
		if (tmp == s1){
			outline += (s2 + " ");
		}
		else
			outline += (tmp + " ");
	}
	return outline;
}


inline void error(std::string err)
{
	std::cout << "[ERROR] " << err << std::endl;
}

inline void log(std::string msg, std::string lead)
{
	std::cout << "[ LOG "  << lead << "]" << msg << std::endl;
}