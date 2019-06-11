#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{

	Bureaucrat	bureaucrat("Bob", 42);
	Bureaucrat	bureaucrat2("Random", 150);

	std::cout << "\x1b[35mCreating Shrubbery Form Shrubby\x1b[0m" << std::endl;
	ShrubberyCreationForm shrub("Shrubby");

	std::cout << shrub << std::endl << "\x1b[35mTesting execution of form before signing\x1b[0m" << std::endl;
	shrub.execute(bureaucrat);

	std::cout << std::endl << "\x1b[35mTesting execution of form after signing\x1b[0m" << std::endl;
	shrub.beSigned(bureaucrat);
	bureaucrat.executeForm(shrub);
	try
	{
		std::cout << std::endl << "\x1b[35mTesting execution error for form\x1b[0m" << std::endl;
		bureaucrat2.executeForm(shrub);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\x1b[35mCreating Robotomy Request Form\x1b[0m" << std::endl;
	RobotomyRequestForm robot("Robot");

	std::cout << robot << std::endl << "\x1b[35mExecuting form before signing\x1b[0m" << std::endl;
	robot.execute(bureaucrat);

	std::cout << std::endl << "\x1b[35mExecuting form multiple times after signing\x1b[0m" << std::endl;
	robot.beSigned(bureaucrat);
	bureaucrat.executeForm(robot);
	bureaucrat.executeForm(robot);
	try
	{
		std::cout << std::endl << "\x1b[35mAttempting to execute form\x1b[0m" << std::endl;
		bureaucrat2.executeForm(robot);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\x1b[35mCreating Presidential Pardon Form\x1b[0m" << std::endl;

	PresidentialPardonForm pres("It was them");
	std::cout << pres << std::endl << "\x1b[35mExecuting form before signing\x1b[0m" << std::endl;
	pres.execute(bureaucrat);

	std::cout << std::endl << "\x1b[35mExecuting form after signing\x1b[0m" << std::endl;
	pres.beSigned(bureaucrat);
	bureaucrat.executeForm(pres);
	try
	{
		std::cout << std::endl << "\x1b[35mAttempting to execute form\x1b[0m" << std::endl;
		bureaucrat2.executeForm(pres);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}