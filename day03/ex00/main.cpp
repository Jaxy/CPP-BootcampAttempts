#include "FragTrap.hpp"

int	main()
{
	FragTrap trapone;

	trapone.meleeAttack("Mielies");
	trapone.rangedAttack("Rangers");
	trapone.takeDamage(50);
	trapone.beRepaired(20);
	trapone.beRepaired(50);
	trapone.takeDamage(120);
	trapone.beRepaired(500);
	trapone.rename("NEWBIE-01");
	trapone.beRepaired(20);

	FragTrap traptwo(trapone);
	traptwo.rename("TQO-TWO");
	traptwo.meleeAttack("NEWBIE-01");
	trapone.takeDamage(30);

	FragTrap trapthree("Thr33");
	std::cout << std::endl;

	trapone.displayStats();
	traptwo.displayStats();
	trapthree.displayStats();
	
	return (0);
}