#include "Logger.hpp"

void Logger::logToConsole(std::string str) {
    std::cout << str << std::endl;
}

void Logger::logToFile(std::string str) {
    std::ofstream file("Log.txt", std::ios_base::app);
    file << str << std::endl;
    file.close();
}

std::string Logger::makeLogEntry(std::string str) {
    std::string result = _displayTimestamp() + str;
    return result;
}

std::string	Logger::_displayTimestamp(void)
{
	time_t      rawTime = time(0);
    struct tm   *timeInfo = localtime(&rawTime);
    char        buffer[80];
    std::stringstream result;

    strftime(buffer, sizeof(buffer), "[%Y%d%m_%H%M%S] ", timeInfo);
    result << buffer;
    return result.str();
}

void Logger::log(std::string const & dest, std::string const & message) {
    std::string functions[] = { "logToConsole", "logToFile", "makeLogEntry" };
    void (Logger::*Functions[])(std::string str) = {
        &Logger::logToConsole,
        &Logger::logToFile,
    };
    if (dest == functions[0]) {
        (this->*(Functions[0]))(makeLogEntry(message));
    } else if (dest == functions[1]) {
        (this->*(Functions[1]))(makeLogEntry(message));
    }
}