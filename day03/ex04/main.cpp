#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

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

	fragTrap2.rename("Trippy Trapper");
	scavTrap2.rename("Scary Seeker");

	NinjaTrap ninjaTrap1("I am THE ninja");
	ninjaTrap1.ninjaShoeBox(fragTrap2);
	ninjaTrap1.ninjaShoeBox(scavTrap2);

	NinjaTrap ninjaTrap2;
	ninjaTrap2.ninjaShoeBox(ninjaTrap1);

	ClapTrap clapTrap1("I am THE parent");
	ninjaTrap2.ninjaShoeBox(clapTrap1);
	
	SuperTrap superTrap1;
	superTrap1.meleeAttack("SSJ2");
	superTrap1.rangedAttack("Great Ape");

	superTrap1.rename("I am the Superior of all Supers!!!");

	SuperTrap superTrap2(superTrap1);

	superTrap1.vaulthunter_dot_exe("BOoOoOOOooo");
	superTrap1.ninjaShoeBox(fragTrap1);

	superTrap1.displayStats();
	superTrap2.displayStats();
	return (0);
}