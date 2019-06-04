#include "Human.hpp"

int	main()
{
	Human 		human;
	
    std::string target = "Test_target";
    
    std::cout << "Using meleeAttack" << std::endl;
    human.action("meleeAttack", target);
    std::cout << "Using rangedAttack" << std::endl;
    human.action("rangedAttack", target);
    std::cout << "Using intimidatingShout" << std::endl;
    human.action("intimidatingShout", target);
    return 0;
}