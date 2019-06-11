#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int	main()
{

	Bureaucrat Bob("Bob", 42);
	Bureaucrat Random("Random", 100);
	std::cout << "\x1b[35mCreated bureaucrats:\x1b[0m" << std::endl << Bob << Random << std::endl;

	Intern intern;
	OfficeBlock ob;
	std::cout << "\x1b[35mCreated intern and office block (no interns set yet)\x1b[0m" << std::endl;
	ob.setSigner(Bob);
	ob.setExecutor(Random);
	try
	{
		ob.doBureaucracy("Shrubbery Creation", "Shrubby");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setIntern(intern);
	std::cout << std::endl << "\x1b[35mSetting Intern\x1b[0m" << std::endl;
	try
	{
		ob.doBureaucracy("Shrubbery Creation", "Shrubby");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}