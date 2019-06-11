#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
    std::string const _name;
    int _grade; //1->150 throw exception (GradeTooHigh/Low)

    public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat &obj);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void operator+=(int const i);
	void operator-=(int const i);

    void executeForm(Form const &form);

    class GradeTooHighException : public std::exception {
        public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &obj);
        GradeTooHighException &operator=(GradeTooHighException const &rhs);
        ~GradeTooHighException() throw();
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &obj);
        GradeTooLowException &operator=(GradeTooLowException const &rhs);
        ~GradeTooLowException() throw();
        const char* what() const throw();  
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif