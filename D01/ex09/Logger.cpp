#include "Logger.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>


Logger::Logger(std::string logFileName)
{
	this->logFile = new std::ofstream(logFileName, std::ios::app);
	loggingMembers[0] = &Logger::logToConsole;
	loggingMembers[1] = &Logger::logToFile;
}

Logger::~Logger()
{
	delete logFile;
}

std::string Logger::makeLogEntry(std::string const & message)
{
	std::string output = "[ ";
	std::time_t now = std::time(0);
	std::string stringNow(ctime(&now));

	stringNow = trim(stringNow);
	output += stringNow + " ] ";

	output += message;

	return output;
}

void Logger::logToConsole(std::string const & message)
{
	std::string fmessage;

	fmessage = makeLogEntry(message);
	std::cout << fmessage << std::endl;
}

void Logger::logToFile(std::string const & message)
{
	std::string fmessage;

	fmessage = makeLogEntry(message);
	if (!(*logFile)){
		std::cout << "problem with the file destination given" << std::endl;
		return;
	}

	(*logFile) << fmessage << std::endl;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	int logIndex;
	const std::string loggerNames[2] = {"console", "file"};


	logIndex = 0;

	if (dest == "file") logIndex = 1;

	(this->*loggingMembers[logIndex])(message);
}


std::string Logger::trim(std::string &s)
{
	std::size_t end = s.find_last_not_of(" \n\r\t\f\v");
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}