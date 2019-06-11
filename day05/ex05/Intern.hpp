#ifndef INTERN_HPP_
# define INTERN_HPP_

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class Intern {
    public:
    Intern();
    Intern(Intern &obj);
    Intern &operator=(Intern const &rhs);
    ~Intern();

    Form	*makeForm(std::string form, std::string target);
}; 

#endif