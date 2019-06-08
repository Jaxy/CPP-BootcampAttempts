#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
	srand(time(0));
	ClapTrap::setStats("SP3R-TP", 1, 100, 100, 120, 120, 60, 20, 5);
	std::cout << "Default Constructor called for \x1b[33m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	srand(time(0));
	ClapTrap::setStats(name, 1, 100, 100, 120, 120, 60, 20, 5);
	std::cout << "Parameter Constructor called for \x1b[33m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

SuperTrap::SuperTrap(SuperTrap &obj) : ClapTrap(obj), FragTrap(obj), NinjaTrap(obj)
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[33m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destructor called for \x1b[33m" << this->name << "\x1b[0m" << std::endl;
	return;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &r)
{
	ClapTrap::operator=(r);
	std::cout << "Assigning Operator called for \x1b[33m" << this->name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}