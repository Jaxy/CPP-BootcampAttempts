#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <sstream>

class Brain {
private:
    std::string size;
    std::string type;
    int age;
    std::string address;
public:
    Brain();
    std::string getAddress();
    void setAddress();
    std::string identify();
};

#endif