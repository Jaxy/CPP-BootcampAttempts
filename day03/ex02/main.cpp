#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	FragTrap fragTrap1;
	ScavTrap scavTrap1;

	std::cout << std::endl;

	fragTrap1.meleeAttack("Mielies");
	scavTrap1.meleeAttack("Rangers");

	fragTrap1.rangedAttack("Corny");
	scavTrap1.rangedAttack("Strangers");

	fragTrap1.takeDamage(30);
	scavTrap1.takeDamage(20);

	fragTrap1.beRepaired(10);
	scavTrap1.beRepaired(5);

	fragTrap1.displayStats();
	scavTrap1.displayStats();

	fragTrap1.vaulthunter_dot_exe("Corny");
	scavTrap1.challengeNewcomer("Strangers");

	FragTrap fragTrap2(fragTrap1);
	ScavTrap scavTrap2(scavTrap1);
	
	return (0);
}