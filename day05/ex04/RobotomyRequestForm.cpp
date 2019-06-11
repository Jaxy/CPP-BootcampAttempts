#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : Form(obj.getName(), 72, 45) {
	*this = obj;
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	static int i = 0;

	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
	{
		system("afplay Drill.mp3 &");
		std::cout << "* Bzzt... BZZZT... VrrrrRrRRRRRrrrr... *" << std::endl;
		if (i % 2 == 0)
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << executor.getName() << " has failed to be robotomized" << std::endl;
		i = i + 1;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs) {
	o << "=====Robotomy Request Form Details=====" << std::endl
    << "Name:\t\t\t" << rhs.getName() << std::endl
    << "Signing Grade Requirement:\t" << rhs.getSGrade() << std::endl
    << "Execution Grade Requirement:\t" << rhs.getEGrade() << std::endl;
	if(rhs.getSigned())
        o << "Form has been signed." << std::endl;
	else
        o << "Form has not been signed yet." << std::endl;
	return (o);
}