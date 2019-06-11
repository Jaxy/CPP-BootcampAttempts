#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int	main()
{
	CentralBureaucracy	cb;
	std::cout << "\x1b[35mCreated Central Bureaucracy\x1b[0m" << std::endl;

	try
	{
		cb.doBureaucracy();

		std::cout << std::endl << "\x1b[35mGenerating 4 signers\x1b[0m" << std::endl;
		cb.feedSigner(*new Bureaucrat("Bob", 1));
		cb.feedSigner(*new Bureaucrat("Tom", 10));
		cb.feedSigner(*new Bureaucrat("Jerry", 25));
		cb.feedSigner(*new Bureaucrat("SUe", 125));
		
		cb.doBureaucracy();

		std::cout << std::endl << "\x1b[35mGenerating 4 executer\x1b[0m" << std::endl;
		cb.feedExecuter(*new Bureaucrat("Yolo", 1));
		cb.feedExecuter(*new Bureaucrat("Gill", 25));
		cb.feedExecuter(*new Bureaucrat("Mint", 50));
		cb.feedExecuter(*new Bureaucrat("Choco", 110));
		
		cb.doBureaucracy();

		std::cout << std::endl << "\x1b[35mGenerating 10 targets\x1b[0m" << std::endl;
		cb.queueUp("A");
		cb.queueUp("B");
		cb.queueUp("C");
		cb.queueUp("D");
		cb.queueUp("E");
		cb.queueUp("F");
		cb.queueUp("G");
		cb.queueUp("H");
		cb.queueUp("I");
		cb.queueUp("J");

		std::cout << std::endl << "\x1b[35mExecuting doBureaucracy function\x1b[0m" << std::endl;
		cb.doBureaucracy();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}