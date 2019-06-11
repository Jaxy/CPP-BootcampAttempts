#ifndef PRESIDENTIAL_PARDONFORM_HPP_
# define PRESIDENTIAL_PARDONFORM_HPP_

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &r);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;
}; 

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs); 

#endif