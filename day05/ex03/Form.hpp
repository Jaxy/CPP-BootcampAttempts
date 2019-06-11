#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
    std::string	const _name;
    bool _signed;
    int	const _sgrade;
    int	const _egrade;

	public:
    Form(std::string const name, int sgrade, int egrade);
    Form(Form &obj);
    Form &operator=(Form const &r);
    virtual ~Form();

    std::string getName() const;
    bool getSigned() const;
    int getSGrade() const;
    int getEGrade() const;

    void signForm();
    void beSigned(Bureaucrat &r);

    void virtual execute(Bureaucrat const &obj) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &obj);
        GradeTooHighException &operator=(GradeTooHighException const &rhs);
        ~GradeTooHighException() throw();
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &obj);
        GradeTooLowException &operator=(GradeTooLowException const &rhs);
        ~GradeTooLowException() throw();
        const char* what() const throw();
    };
}; 

std::ostream &operator<<(std::ostream &o, Form const &rhs); 

#endif