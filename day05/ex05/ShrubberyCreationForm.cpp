#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form(obj.getName(), 145, 137) {
	*this = obj;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	(void)rhs;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
	{
		std::string		file = this->getName() + "_shrubbery.txt";
		std::ofstream	ofs(file);

		ofs << ""
			"              * *    " << std::endl <<
			"           *    *  *" << std::endl <<
			"      *  *    *     *  *" << std::endl <<
			"     *     *    *  *    *" << std::endl <<
			" * *   *    *    *    *   *" << std::endl <<
			" *     *  *    * * .#  *   *" << std::endl <<
			" *   *     * #.  .# *   *" << std::endl <<
			"  *     \"#.  #: #\" * *    *" << std::endl <<
			" *   * * \"#. ##\"       *" << std::endl <<
			"   *       \"###" << std::endl <<
			"   *       \"###" << std::endl <<
			"              ##." << std::endl <<
			"              .##:" << std::endl << 
			"              :###" << std::endl <<       
			"              ;###" << std::endl <<      
			"            ,####." << std::endl <<     
			"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\" << std::endl;
		ofs.close();
		std::cout << "Shrubbery Form has been executed by " << executor.getName() << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream			&operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	o << "=====Shrubbery Creation Form Details=====" << std::endl
    << "Name:\t\t\t" << rhs.getName() << std::endl
    << "Signing Grade Requirement:\t" << rhs.getSGrade() << std::endl
    << "Execution Grade Requirement:\t" << rhs.getEGrade() << std::endl;
	if(rhs.getSigned())
        o << "Form has been signed." << std::endl;
	else
        o << "Form has not been signed yet." << std::endl;
	return (o);
}