#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	srand(time(0));
	ClapTrap::setStats("NNJ4-TP", 1, 60, 60, 120, 120, 60, 5, 0);
	std::cout << "Default Constructor called for \x1b[30m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

NinjaTrap::NinjaTrap(std::string name)
{
	srand(time(0));
	ClapTrap::setStats(name, 1, 60, 60, 120, 120, 60, 5, 0);
	std::cout << "Parameter Constructor called for \x1b[30m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap &obj) : ClapTrap()
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[30m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor called for \x1b[30m" << this->name << "\x1b[0m" << std::endl;
	return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &r) 
{
	ClapTrap::operator=(r);
	std::cout << "Assigning Operator called for \x1b[30m" << this->name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	NinjaTrap::ninjaShoeBox(ClapTrap &obj)
{
	std::cout << "\x1b[30m" << this->name << "\x1b[0m sees CL4P-TP \x1b[30m" << obj.name << "\x1b[0m from his hiding spot (actually looking for their shoe)" << std::endl << std::endl;
	return;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &obj)
{
	std::cout << "\x1b[30m" << this->name << "\x1b[0m sees FR4G-TP \x1b[30m" << obj.name << "\x1b[0m tripping down memory lane (they won't be able to recall much after that)" << std::endl << std::endl;
	return;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &obj)
{
	std::cout << "\x1b[30m" << this->name << "\x1b[0m sees NNJ4-TP \x1b[30m" << obj.name << "\x1b[0m admiring their reflection (their shoes are spotless after all)" << std::endl << std::endl;
	return;	
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &obj)
{
	std::cout << "\x1b[30m" << this->name << "\x1b[0m sees SC4V-TP \x1b[30m" << obj.name << "\x1b[0m running off with a random shoe (wonder where that came from...)" << std::endl << std::endl;
    return;
}