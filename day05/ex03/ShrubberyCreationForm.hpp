#ifndef SHRUBBERY_CREATIONFORM_HPP_
# define SHRUBBERY_CREATIONFORM_HPP_

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;
}; 

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs); 

#endif