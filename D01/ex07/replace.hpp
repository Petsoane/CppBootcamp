#ifndef REPLACE
#define REPLACE

#include <string>

void replace(std::string filename, std::string s1, std::string s2);
void error(std::string err);
void log(std::string msg, std::string lead="");
std::string swap(std::string line, std::string s1, std::string s2);

#endif