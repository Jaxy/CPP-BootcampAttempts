#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon &obj) : Victim(obj) {
	*this = obj;
	return;
}

Peon &Peon::operator=(Peon const &rhs) {
	this->_name = rhs._name;
	return (*this);
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return;
}