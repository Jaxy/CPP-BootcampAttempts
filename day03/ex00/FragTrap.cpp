#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hp(100), _mhp(100), _ep(100), _mep(100), _lv(1), _name("FR4G-TP"), _mAtk(30), _rAtk(20), _armor(5)
{
	srand(time(0));
	std::cout << "Default Constructor called for \x1b[35m" << this->_name << "\x1b[0m" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _hp(100), _mhp(100), _ep(100), _mep(100), _lv(1), _name(name), _mAtk(30), _rAtk(20), _armor(5)
{
	srand(time(0));
	std::cout << "Parameter Constructor called for \x1b[35m" << this->_name << "\x1b[0m" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap &obj)
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[35m" << this->_name << "\x1b[0m" << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for \x1b[35m" << this->_name << "\x1b[0m" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &r) 
{
	this->_name = r._name;
	this->_lv = r._lv;
	this->_hp = r._hp;
	this->_mhp = r._mhp;
	this->_ep = r._ep;
	this->_mep = r._mep;
	this->_mAtk = r._mAtk;
	this->_rAtk = r._rAtk;
	this->_armor = r._armor;
	std::cout << "Assigning Operator called for \x1b[35m" << this->_name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << 
    " at melee, causing " << this->_mAtk << " points of damage !" << std::endl;
	return;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << 
    " at range, causing " << this->_rAtk << " points of damage !" << std::endl;
	return;
}

void	FragTrap::rename(std::string input)
{
	std::cout << this->_name << " is being renamed, meet [" << input << "]!" << std::endl << std::endl;
	this->_name = input;
	return;
}

void	FragTrap::displayStats()
{
	std::cout << this->_name << " stats:" << std::endl <<
		"Level: " << this->_lv << std::endl <<
		"Health: " << this->_hp << "/" << this->_mhp << std::endl <<
		"Energy: " << this->_ep << "/" << this->_mep << std::endl <<
		"Melee Attack: " << this->_mAtk << std::endl <<
		"Ranged Attack: " << this->_rAtk << std::endl <<
		"Armor: " << this->_armor << std::endl << std::endl;
	return;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int i = 0;

	if (amount > (unsigned int)(this->_mhp + this->_armor))
		i = this->_mhp + this->_armor;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_armor;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "FR4G-TP " << this->_name << " took " << amount << " of damage, armor blocked " << this->_armor << 
		" points of damage. Current health is \x1b[31m" << this->_hp << "\x1b[0m/" << this->_mhp << std::endl;
	if (this->_hp == 0)
		std::cout << "Your robot is dead" << std::endl << std::endl;
	else
		std::cout << "You live to fight another round" << std::endl << std::endl;
	return;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int healed = 0;

	if (amount > (unsigned int)this->_mhp)
		amount = (unsigned int)this->_mhp;
	if ((this->_hp + amount) > (unsigned int)this->_mhp)
	{
		healed = ((this->_hp + amount) - this->_mhp) - amount;
		if (healed < 0)
			healed = healed * -1;
	}
	else
		healed = amount;
	this->_hp = this->_hp + amount;
	if (this->_hp > this->_mhp)
		this->_hp = this->_mhp;
	std::cout << "FR4G-TP " << this->_name << " recovers " << healed << " health back. Current health is \x1b[32m"  <<
		this->_hp << "\x1b[0m/" << this->_mhp << std::endl << std::endl;
	return;
}

// void	FragTrap::vaulthunter_dot_exe(std::string const &target)
// {
// 	int i = rand();
// 	int x = 0;

// 	void (FragTrap::*ptr[])(std::string const &) =
// 	{
//         //functions
// 	};

// 	if (this->_ep < 25)
// 	{
// 		//low energy points
// 	}
// 	else
// 		//energy points - 25 as uses attack
// 	//randomly call functions
// 	return;
// }