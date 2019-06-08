#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	srand(time(0));
	ClapTrap::setStats("SC4V-TP", 1, 100, 100, 50, 50, 20, 15, 3);
	std::cout << "Default Constructor called for \x1b[34m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	srand(time(0));
	ClapTrap::setStats(name, 1, 100, 100, 50, 50, 20, 15, 3);
	std::cout << "Parameter Constructor called for \x1b[34m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap()
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[34m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for \x1b[34m" << this->name << "\x1b[0m" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &r) 
{
	ClapTrap::operator=(r);
	std::cout << "Assigning Operator called for \x1b[34m" << this->name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int i = rand() % 5;
	std::string Challenges[] = {
		"radiate heat by short-circuiting (too much error handling criteria to process)",
		"convert energy source from high carbon footprint fuel (easy on the fries)",
		"change your diet from nuts and bolts to sticks and stones",
		"get a makeover using the spare parts lying on the battlefield",
		"dedicate half your life to your enemy"
	};
	std::cout << "\x1b[34m" << this->name << "\x1b[0m" << " challenges newcomer \x1b[34m" << target << "\x1b[0m to "
	<< Challenges[i] << std::endl << std::endl;
}