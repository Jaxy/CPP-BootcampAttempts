#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("CL4P-TP"), _hp(100), _mhp(100), _ep(100), _mep(100), _lv(1), _mAtk(30), _rAtk(20), _armor(5)
{
	srand(time(0));
	std::cout << "Default Constructor called for \x1b[36m" << this->name << "\x1b[0m" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : name(name), _hp(100), _mhp(100), _ep(100), _mep(100), _lv(1), _mAtk(30), _rAtk(20), _armor(5)
{
	srand(time(0));
	std::cout << "Parameter Constructor called for \x1b[36m" << this->name << "\x1b[0m" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	srand(time(0));
	*this = obj;
	std::cout << "Copy Constructor called for \x1b[36m" << this->name << "\x1b[0m" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called for \x1b[36m" << this->name << "\x1b[0m" << std::endl;
	return;
}

void	ClapTrap::setStats(std::string name, int lv, int hp, int mhp, int ep, int mep, int mAtk, int rAtk, int armor)
{
	this->name = name;
	this->_lv = lv;
	this->_hp = hp;
	this->_mhp = mhp;
	this->_ep = ep;
	this->_mep = mep;
	this->_mAtk = mAtk;
	this->_rAtk = rAtk;
	this->_armor = armor;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &r) 
{
	this->name = r.name;
	this->_lv = r._lv;
	this->_hp = r._hp;
	this->_mhp = r._mhp;
	this->_ep = r._ep;
	this->_mep = r._mep;
	this->_mAtk = r._mAtk;
	this->_rAtk = r._rAtk;
	this->_armor = r._armor;
	std::cout << "Assigning Operator called for \x1b[36m" << this->name << "\x1b[0m" << std::endl << std::endl;
	return (*this);
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP \x1b[36m" << this->name << "\x1b[0m attacks \x1b[36m" << target << 
    "\x1b[0m at melee, causing \x1b[31m" << this->_mAtk << "\x1b[0m points of damage !" 
    << std::endl << "Too close for comfort!!!" << std::endl << std::endl;
	return;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP \x1b[36m" << this->name << "\x1b[0m attacks \x1b[36m" << target << 
    "\x1b[0m at range, causing \x1b[31m" << this->_rAtk << "\x1b[0m points of damage !" 
    << std::endl << "Far beyond my pain threshold!!!" << std::endl << std::endl;
	return;
}

void	ClapTrap::rename(std::string input)
{
	std::cout << "\x1b[36m" << this->name << "\x1b[0m is being renamed, meet \x1b[36m" << input << 
	"\x1b[0m once again but with a different name :P I think I lost my old self" << std::endl << std::endl;
	this->name = input;
	return;
}

void	ClapTrap::displayStats()
{
	std::cout << "===== \x1b[36m" << this->name << "\x1b[0m =====" << std::endl <<
		"Level:\t\t" << this->_lv << std::endl <<
		"Health:\t\t" << this->_hp << "/" << this->_mhp << std::endl <<
		"Energy:\t\t" << this->_ep << "/" << this->_mep << std::endl <<
		"Melee Attack:\t" << this->_mAtk << std::endl <<
		"Ranged Attack:\t" << this->_rAtk << std::endl <<
		"Armor:\t\t" << this->_armor << std::endl << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int i = 0;

	if (amount > (unsigned int)(this->_mhp + this->_armor))
		i = this->_mhp + this->_armor;
	else
		i = amount;
	this->_hp = this->_hp - i + this->_armor;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "CL4P-TP \x1b[36m" << this->name << "\x1b[0m took \x1b[31m" << amount << "\x1b[0m of damage, armor blocked \x1b[32m" << this->_armor << 
		"\x1b[0m points of damage. Current health is \x1b[31m" << this->_hp << "\x1b[0m/" << this->_mhp << std::endl;
	if (this->_hp == 0)
		std::cout << "Your robot is dead" << std::endl << std::endl;
	else
		std::cout << "You live to fight another round" << std::endl << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int healed = 0;

	if (amount > (unsigned int)this->_mhp)
		amount = this->_mhp;
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
	std::cout << "CL4P-TP \x1b[36m" << this->name << "\x1b[0m recovers \x1b[32m" << healed 
	<< "\x1b[0m health back. Current health is \x1b[32m"  << this->_hp << 
	"\x1b[0m/" << this->_mhp << std::endl << "How refreshing!" << std::endl << std::endl;
	return;
}

void	ClapTrap::setHp(int i)
{
	this->_hp = i;
	return;
}

void	ClapTrap::setMhp(int i)
{
	this->_mhp = i;
	return;
}

void	ClapTrap::setArmor(int i)
{
	this->_armor = i;
	return;
}

void	ClapTrap::setEp(int i)
{
	this->_ep = i;
	return;
}

int		ClapTrap::getHp(void)
{
	return (this->_hp);
}

int		ClapTrap::getMhp(void)
{
	return (this->_mhp);
}

int		ClapTrap::getEp(void)
{
	return (this->_ep);
}

int		ClapTrap::getMep(void)
{
	return (this->_mep);
}

int		ClapTrap::getLv(void)
{
	return (this->_lv);
}

int		ClapTrap::getmAtk(void)
{
	return (this->_mAtk);
}

int		ClapTrap::getrAtk(void)
{
	return (this->_rAtk);
}

int		ClapTrap::getArmor(void)
{
	return (this->_armor);
}
