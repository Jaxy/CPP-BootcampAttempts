#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *p_str = &str;
    std::string &r_str = str;

    std::cout << "String:\t\t" << str << std::endl;
    std::cout << "Pointer:\t" << *p_str << std::endl;
    std::cout << "Reference:\t" << r_str << std::endl;
}