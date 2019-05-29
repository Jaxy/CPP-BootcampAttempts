#ifndef PONY_HPP_
#define PONY_HPP_

#include <iostream>

class Pony {
private:
    std::string name;
    std::string colour;
    int age;
public:
    Pony();
    std::string getName();
    void setName(std::string name);
    std::string getColour();
    void setColour(std::string colour);
    int getAge();
    void setAge(int age);
    void displayDetails();
};

#endif