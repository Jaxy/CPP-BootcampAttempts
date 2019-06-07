#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hp(100), _mhp(100), _ep(50), _mep(50), _lv(1), _name("SC4G-TP"), _mAtk(20), _rAtk(15), _armor(3)
{
	srand(time(0));
	std::cout << "Default Constructor called for \x1b[34m" << this->_name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _mhp(100), _ep(100), _mep(100), _lv(1), _name(name), _mAtk(30), _rAtk(20), _armor(5)
{
	srand(time(0));
	std::cout << "Parameter Constructor called for \x1b[34m" << this->_name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[34m" << this->_name << "\x1b[0m" << std::endl;
	displayStats();
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for \x1b[34m" << this->_name << "\x1b[0m" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &r) 
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
	std::cout << "Assigning Operator called for \x1b[34m" << this->_name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m at melee, causing \x1b[31m" << this->_mAtk << "\x1b[0m points of damage !" 
    << std::endl << "Too close for comfort!!!" << std::endl << std::endl;
	return;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m at range, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !" 
    << std::endl << "Far beyond my pain threshold!!!" << std::endl << std::endl;
	return;
}

void	ScavTrap::rename(std::string input)
{
	std::cout << "\x1b[34m" << this->_name << "\x1b[0m is being renamed, meet \x1b[34m" << input << 
	"\x1b[0m once again but with a different name :P I think I lost my old self" << std::endl << std::endl;
	this->_name = input;
	return;
}

void	ScavTrap::randAtk1(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m with a \x1b[33mstick\x1b[0m, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !"
    << std::endl << "Sticks and ... nevermind, sticks will do!" << std::endl << std::endl;
	return;
}

void	ScavTrap::randAtk2(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m with a \x1b[33mshoe\x1b[0m, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !"
    << std::endl << "Good thing you only have one..." << std::endl << std::endl;
	return;
}

void	ScavTrap::randAtk3(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m with a \x1b[33mspanner\x1b[0m, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !"
    << std::endl << "Do you think I have loose screws upstairs???" << std::endl << std::endl;
	return;
}

void	ScavTrap::randAtk4(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m with a \x1b[33mpillow\x1b[0m, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !"
    << std::endl << "Thanks, I know I need rest but I'm in no rush for the RIP label!!!!" << std::endl << std::endl;
	return;
}

void	ScavTrap::randAtk5(std::string const &target)
{
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m attacks \x1b[34m" << target << 
    "\x1b[0m with a \x1b[33mpunch\x1b[0m, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !"
    << std::endl << "Not the face~~~~~" << std::endl << std::endl;
	return;
}

void	ScavTrap::displayStats()
{
	std::cout << "===== \x1b[34m" << this->_name << "\x1b[0m =====" << std::endl <<
		"Level:\t\t" << this->_lv << std::endl <<
		"Health:\t\t" << this->_hp << "/" << this->_mhp << std::endl <<
		"Energy:\t\t" << this->_ep << "/" << this->_mep << std::endl <<
		"Melee Attack:\t" << this->_mAtk << std::endl <<
		"Ranged Attack:\t" << this->_rAtk << std::endl <<
		"Armor:\t\t" << this->_armor << std::endl << std::endl;
	return;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int i = 0;

	if (amount > (unsigned int)(this->_mhp + this->_armor))
		i = this->_mhp + this->_armor;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_armor;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m took \x1b[31m" << amount << "\x1b[0m of damage, armor blocked \x1b[32m" << this->_armor << 
		"\x1b[0m points of damage. Current health is \x1b[31m" << this->_hp << "\x1b[0m/" << this->_mhp << std::endl;
	if (this->_hp == 0)
		std::cout << "Your robot is dead" << std::endl << std::endl;
	else
		std::cout << "You live to fight another round" << std::endl << std::endl;
	return;
}

void	ScavTrap::beRepaired(unsigned int amount)
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
	std::cout << "SC4G-TP \x1b[34m" << this->_name << "\x1b[0m recovers \x1b[32m" << healed 
	<< "\x1b[0m health back. Current health is \x1b[32m"  << this->_hp << 
	"\x1b[0m/" << this->_mhp << std::endl << "How refreshing!" << std::endl << std::endl;
	return;
}

void	ScavTrap::vaulthunter_dot_exe(std::string const &target)
{
	int i = rand() % 5;
	// int x = 0;

	void (ScavTrap::*randAtks[])(std::string const &) =
	{
        //functions
		&ScavTrap::randAtk1,
		&ScavTrap::randAtk2,
		&ScavTrap::randAtk3,
		&ScavTrap::randAtk4,
		&ScavTrap::randAtk5
	};

	if (this->_ep < 25)
	{
		//low energy points
		std::cout << "Insufficient energy points. \x1b[34m" << this->_name << "\x1b[0m has \x1b[31m" << this->_ep << "\x1b[0m energy points. You need \x1b[32m25\x1b[0m energy points minimum!!!" << std::endl << std::endl;
	}
	else {
		//energy points - 25 as uses attack
		this->_ep = this->_ep - 25;
		(this->*(randAtks[i]))(target);
	}
	return;
}