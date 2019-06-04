#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include <iostream>
#include <sstream>
#include <fstream>

class Logger {
    private:
    void logToConsole(std::string str);
    void logToFile(std::string str);
    std::string makeLogEntry(std::string str);
    std::string _displayTimestamp(void);

    public:
    void log(std::string const & dest, std::string const & message);
};

#endif