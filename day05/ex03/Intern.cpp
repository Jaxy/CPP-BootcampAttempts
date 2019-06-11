#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	return;
}

Intern::Intern(Intern &obj) {
	*this = obj;
	return;
}

Intern & Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
}

Intern::~Intern() {
	return;
}

Form *Intern::makeForm(std::string form, std::string target) {
	if (form == "shrubbery creation" || form == "Shrubbery Creation")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "robotomy request" || form == "Robotomy Request")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "presidential pardon" || form == "Presidential Pardon")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else
		std::cout << "Itern failed to create " << form << std::endl;
	return (NULL);
}