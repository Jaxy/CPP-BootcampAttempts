#include "Logger.hpp"

int main() {
    Logger logger;

    std::cout << "Writing to console" << std::endl;
    logger.log("logToConsole", "Help me please");
    std::cout << "Writing to file" << std::endl;
    logger.log("logToFile", "Help me please");
    logger.log("logToFile", "This is appended");
    return 0;
}