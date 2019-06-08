#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <cstdlib>
class	ClapTrap
{

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &obj);
		virtual ~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &r);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	rename(std::string input);
		void	displayStats(void);

		void	setStats(std::string name, int lv, int hp, int mhp, int ep, int mep, int mAtk, int rAtk, int armor);

		int		getHp(void);
		int		getMhp(void);
		int		getEp(void);
		int		getMep(void);
		int		getLv(void);
		int		getmAtk(void);
		int		getrAtk(void);
		int		getArmor(void);

		void	setHp(int i);
		void	setMhp(int i);
		void	setArmor(int i);
		void	setEp(int i);

		std::string			name;

	private:

		int					_hp;
		int					_mhp;
		int					_ep;
		int					_mep;
		int					_lv;
		int					_mAtk;
		int					_rAtk;
		int					_armor;

}; 

#endif