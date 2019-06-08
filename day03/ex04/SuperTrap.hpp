#ifndef SUPER_TRAP_HPP_
#define SUPER_TRAP_HPP_

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : virtual public FragTrap, virtual public NinjaTrap //ensures only one copy of base class's member variables/functions are inherited by subclass
{

	public:

		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap &obj);
		~SuperTrap(void);
		SuperTrap &operator=(SuperTrap const &r);

}; 

#endif