#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include <iostream>
#include <cstdlib>

class ScavTrap {
    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &obj);
    ~ScavTrap(void);
    ScavTrap &operator=(ScavTrap const &r);

    void	rangedAttack(std::string const &target);
    void	meleeAttack(std::string const &target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

    void	rename(std::string input);
    void	displayStats(void);

    void    randAtk1(std::string const &target);
    void    randAtk2(std::string const &target);
    void    randAtk3(std::string const &target);
    void    randAtk4(std::string const &target);
    void    randAtk5(std::string const &target);
    void	challengeNewcomer(std::string const &target);

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