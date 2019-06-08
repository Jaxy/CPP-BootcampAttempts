#ifndef NINJA_TRAP_HPP_
#define NINJA_TRAP_HPP_

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap //ensures only one copy of base class's member variables/functions are inherited by subclass
{

	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap &obj);
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const &r);

		void	ninjaShoeBox(ClapTrap &obj);
		void	ninjaShoeBox(FragTrap &obj);
		void	ninjaShoeBox(NinjaTrap &obj);
		void	ninjaShoeBox(ScavTrap &obj);
}; 

#endif