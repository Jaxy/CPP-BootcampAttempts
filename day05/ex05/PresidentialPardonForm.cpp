#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 72, 45) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : Form(obj.getName(), 72, 45) {
	*this = obj;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	(void)rhs;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
		std::cout << executor.getName() << " has been pardoned by His Honour" << std::endl;
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs) {
	o << "=====Presidential Pardon Form Details=====" << std::endl
    << "Name:\t\t\t" << rhs.getName() << std::endl
    << "Signing Grade Requirement:\t" << rhs.getSGrade() << std::endl
    << "Execution Grade Requirement:\t" << rhs.getEGrade() << std::endl;
	if(rhs.getSigned())
        o << "Form has been signed." << std::endl;
	else
        o << "Form has not been signed yet." << std::endl;
	return (o);
}