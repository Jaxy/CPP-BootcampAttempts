#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	srand(time(0));
	ClapTrap::setStats("FR4G-TP", 1, 100, 100, 100, 100, 30, 20, 5);
	std::cout << "Default Constructor called for \x1b[35m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

FragTrap::FragTrap(std::string name) 
{
	srand(time(0));
	ClapTrap::setStats(name, 1, 100, 100, 100, 100, 30, 20, 5);
	std::cout << "Parameter Constructor called for \x1b[35m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap()
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[35m" << this->name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for \x1b[35m" << this->name << "\x1b[0m" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &r) 
{
	ClapTrap::operator=(r);
	std::cout << "Assigning Operator called for \x1b[35m" << this->name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	FragTrap::randAtk1(std::string const &target)
{
	std::cout << "FR4G-TP \x1b[35m" << this->name << "\x1b[0m attacks \x1b[35m" << target << 
    "\x1b[0m with a \x1b[33mstick\x1b[0m, causing \x1b[31m" << ClapTrap::getrAtk() << "\x1b[0m points of damage !" << std::endl << std::endl;
	return;
}

void	FragTrap::randAtk2(std::string const &target)
{
	std::cout << "FR4G-TP \x1b[35m" << this->name << "\x1b[0m attacks \x1b[35m" << target << 
    "\x1b[0m with a \x1b[33mshoe\x1b[0m, causing \x1b[31m" << ClapTrap::getrAtk() << "\x1b[0m points of damage !" << std::endl << std::endl;
	return;
}

void	FragTrap::randAtk3(std::string const &target)
{
	std::cout << "FR4G-TP \x1b[35m" << this->name << "\x1b[0m attacks \x1b[35m" << target << 
    "\x1b[0m with a \x1b[33mspanner\x1b[0m, causing \x1b[31m" << ClapTrap::getrAtk() << "\x1b[0m points of damage !" << std::endl << std::endl;
	return;
}

void	FragTrap::randAtk4(std::string const &target)
{
	std::cout << "FR4G-TP \x1b[35m" << this->name << "\x1b[0m attacks \x1b[35m" << target << 
    "\x1b[0m with a \x1b[33mpillow\x1b[0m, causing \x1b[31m" << ClapTrap::getrAtk() << "\x1b[0m points of damage !" << std::endl << std::endl;
	return;
}

void	FragTrap::randAtk5(std::string const &target)
{
	std::cout << "FR4G-TP \x1b[35m" << this->name << "\x1b[0m attacks \x1b[35m" << target << 
    "\x1b[0m with a \x1b[33mpunch\x1b[0m, causing \x1b[31m" << ClapTrap::getrAtk() << "\x1b[0m points of damage !" << std::endl << std::endl;
	return;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int i = rand() % 5;

	void (FragTrap::*randAtks[])(std::string const &) =
	{
		&FragTrap::randAtk1,
		&FragTrap::randAtk2,
		&FragTrap::randAtk3,
		&FragTrap::randAtk4,
		&FragTrap::randAtk5
	};

	if (ClapTrap::getEp() < 25)
	{
		std::cout << "Insufficient energy points. \x1b[35m" << this->name << "\x1b[0m has \x1b[31m" << ClapTrap::getEp() << "\x1b[0m energy points. You need \x1b[32m25\x1b[0m energy points minimum!!!" << std::endl << std::endl;
	}
	else {
		ClapTrap::setEp(ClapTrap::getEp() - 25);
		(this->*(randAtks[i]))(target);
	}
	// std::cout << "FR4G-TP " << this->name << " uses VaultHunter.Exe! Let's see it's real powers!" << std::endl;
	return;
}