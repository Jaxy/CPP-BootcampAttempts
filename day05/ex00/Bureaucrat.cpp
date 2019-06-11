#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    (grade < 1) ? throw Bureaucrat::GradeTooHighException() : ((grade > 150) ? throw Bureaucrat::GradeTooLowException() : this->_grade = grade);
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) {
    *this = obj;
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs) {
    this->_grade = rhs._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {
    return;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
    return (o);
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) {
	*this = obj;
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &r) {
	(void)r;
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	return;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Input Grade is too high\t[ < 1\t]");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) {
	*this = obj;
	return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &r)  {
	(void)r;
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Input Grade is too low\t[ > 150\t]");
}

void Bureaucrat::operator-=(int const i) {
	if ((this->_grade + i) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + i;
}

void Bureaucrat::operator+=(int const i) {
	if ((this->_grade - i) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - i;
}