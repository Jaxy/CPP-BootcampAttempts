#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat bureaucrat("Bob", 42);
	Bureaucrat bureaucrat2("Random", 150);

	Intern intern;
	std::cout << "\x1b[35mNew Intern created\x1b[0m" << std::endl << std::endl;

	Form *fbureaucrat; //Shrubbery

	std::cout << "\x1b[35mCreating Shrubbery form via Intern\x1b[0m" << std::endl;
	fbureaucrat = intern.makeForm("Shrubbery Creation", "Bill");

	std::cout << "\x1b[35mSigning form and executing it\x1b[0m" << std::endl;
	fbureaucrat->beSigned(bureaucrat);
	bureaucrat2.executeForm(*fbureaucrat);

	Form *fbureaucrat2; //Robotomy

	std::cout << std::endl << "\x1b[35mCreating Robotomy form via Intern\x1b[0m" << std::endl;
	fbureaucrat2 = intern.makeForm("Robotomy Request", "Joe");

	std::cout << "\x1b[35mSigning form and executing it\x1b[0m" << std::endl;
	fbureaucrat2->beSigned(bureaucrat);
	bureaucrat2.executeForm(*fbureaucrat2);

	Form	*fbureaucrat3; //Presidential

	std::cout << std::endl << "\x1b[35mCreating Presidential form via Intern\x1b[0m" << std::endl;
	fbureaucrat3 = intern.makeForm("Presidential Pardon", "Grandeur");

	std::cout << "\x1b[35mSigning form and executing it\x1b[0m" << std::endl;
	fbureaucrat3->beSigned(bureaucrat);
	bureaucrat2.executeForm(*fbureaucrat3);

	Form *fbureaucrat4;
	std::cout << std::endl << "\x1b[35mUndefined form creation test\x1b[0m" << std::endl;
	fbureaucrat4 = intern.makeForm("Foreign", "No ways");

	delete fbureaucrat;
	delete fbureaucrat2;
	delete fbureaucrat3;
	delete fbureaucrat4;
	return (0);
}