#include "Form.hpp"

Form::Form(std::string const name, int sgrade, int egrade) : _name(name), _signed(false), _sgrade(sgrade), _egrade(egrade) {
    (sgrade < 1 || egrade < 1) ? throw Form::GradeTooHighException() : ((sgrade > 150 || egrade > 150) ? throw Form::GradeTooLowException() : 0);
	return;
}

Form::Form(Form &obj) : _sgrade(obj._sgrade), _egrade(obj._egrade) {
	*this = obj;
	return;
}

Form & Form::operator=(Form const &rhs) 
{
	this->_signed = rhs._signed;
	return (*this);
}

Form::~Form() {
	return;
}

void Form::signForm() 
{
	this->_signed = true;
	return;
}

void Form::beSigned(Bureaucrat &rhs)
{
	if (rhs.getGrade() > this->_sgrade)
	{
		std::cout << "\x1b[31m<Bureaucrat " << rhs.getName() << "> cannot sign <" << this->_name << "> because ";
		throw Form::GradeTooLowException();
        std::cout << "\x1b[0mEND";
	}
	else
	{
		if (this->_signed)
			std::cout << "\x1b[31m<Bureaucrat " << rhs.getName() << "> cannot sign <" << this->_name << "> because form is already signed\x1b[0m" << std::endl;
		else
		{
			std::cout << "\x1b[32m<Bureaucrat " << rhs.getName() << "> signs <" << this->_name << ">\x1b[0m" << std::endl;
			signForm();
		}
	}

}

std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getSGrade() const {
	return (this->_sgrade);
}

int Form::getEGrade() const {
	return	(this->_egrade);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << "=====Form Details=====" << std::endl
    << "Name:\t\t\t" << rhs.getName() << std::endl
    << "Signing Grade Requirement:\t" << rhs.getSGrade() << std::endl
    << "Execution Grade Requirement:\t" << rhs.getEGrade() << std::endl;
	if(rhs.getSigned())
        o << "Form has been signed." << std::endl;
	else
        o << "Form has not been signed yet." << std::endl;
	return (o);
}

Form::GradeTooHighException::GradeTooHighException() {
	return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) {
	*this = obj;
	return;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
	return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &rhs)  {
	(void)rhs;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Form Error: Input Grade is too high\t[ < 1\t]\x1b[0m");
}

Form::GradeTooLowException::GradeTooLowException() {
	return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) {
	*this = obj;
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
	return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &rhs)  {
	(void)rhs;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form Error: Input Grade is too low\t[ > 150\t]\x1b[0m");
}