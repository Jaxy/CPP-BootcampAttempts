#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include <iostream>
#include <cstdlib>

class FragTrap {
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap &obj);
    virtual ~FragTrap(void);
    FragTrap &operator=(FragTrap const &r);

    void	rangedAttack(std::string const &target);
    void	meleeAttack(std::string const &target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

    void	rename(std::string input);
    void	displayStats(void);

    // void	vaulthunter_dot_exe(std:: string const &target);

	private:
    int					_hp;
    int					_mhp;
    int					_ep;
    int					_mep;
    int					_lv;
    std::string			_name;
    int					_mAtk;
    int					_rAtk;
    int					_armor;
};

#endif