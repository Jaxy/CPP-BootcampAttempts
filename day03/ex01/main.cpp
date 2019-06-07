#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	FragTrap fragTrap1;
	ScavTrap scavTrap1;

	fragTrap1.meleeAttack("Mielies");
	fragTrap1.rangedAttack("Rangers");
	fragTrap1.takeDamage(50);
	fragTrap1.beRepaired(20);
	fragTrap1.beRepaired(50);
	fragTrap1.takeDamage(120);
	fragTrap1.beRepaired(500);
	fragTrap1.rename("NEWBIE-01");
	fragTrap1.beRepaired(20);

	FragTrap fragTrap2(fragTrap1);
	fragTrap2.rename("TQO-TWO");
	fragTrap2.meleeAttack("NEWBIE-01");
	fragTrap1.takeDamage(30);

	FragTrap fragTrap3("Thr33");
	std::cout << std::endl;

	std::cout << "===== VAULT HUNTER EXE =====" << std::endl;
	fragTrap1.vaulthunter_dot_exe("Thr33");
	fragTrap3.takeDamage(20);
	fragTrap2.vaulthunter_dot_exe("Thr33");
	fragTrap3.takeDamage(20);
	fragTrap2.vaulthunter_dot_exe("Thr33");
	fragTrap3.takeDamage(20);
	fragTrap2.vaulthunter_dot_exe("Thr33");
	fragTrap3.takeDamage(20);
	fragTrap2.vaulthunter_dot_exe("NEWBIE-01");
	fragTrap1.takeDamage(20);
	fragTrap2.vaulthunter_dot_exe("NEWBIE-01");
	fragTrap1.takeDamage(20);

	std::cout << "Final Statistics of all robots" << std::endl;
	fragTrap1.displayStats();
	fragTrap2.displayStats();
	fragTrap3.displayStats();

	scavTrap1.meleeAttack("Mielies");
	scavTrap1.rangedAttack("Rangers");
	scavTrap1.takeDamage(50);
	scavTrap1.beRepaired(20);
	scavTrap1.beRepaired(50);
	scavTrap1.takeDamage(120);
	scavTrap1.beRepaired(500);
	scavTrap1.rename("NEWBIE-01");
	scavTrap1.beRepaired(20);
	
	return (0);
}