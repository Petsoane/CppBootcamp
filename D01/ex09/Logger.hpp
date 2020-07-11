#ifndef MY_LOGGER
#define MY_LOGGER

#include <string>
#include <fstream>


class Logger
{
public:
	Logger(std::string logFileName="Logfile.log");
	~Logger();
	// [function: Log] takes a string and a destination for where to log.
	void log(std::string const & dest, std::string const & message);
	
private:
	// ==> Member variables.
	std::ofstream *logFile;
	void (Logger::*loggingMembers[2])(std::string const &);
	// ==> Member functions
	void logToConsole(std::string const & message) ;
	void logToFile(std::string const & message) ;
	std::string makeLogEntry(std::string const & message);
	std::string trim(std::string & s);
	
};

#endif