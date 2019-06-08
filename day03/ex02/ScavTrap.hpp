#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &r);

		void	challengeNewcomer(std::string const &target);

}; 

#endif