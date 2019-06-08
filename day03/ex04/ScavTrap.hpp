#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap //ensures only one copy of base class's member variables/functions are inherited by subclass
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &obj);
		virtual ~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &r);

		void	challengeNewcomer(std::string const &target);

}; 

#endif