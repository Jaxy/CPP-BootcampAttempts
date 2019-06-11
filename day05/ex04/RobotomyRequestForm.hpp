#ifndef ROBOTOMY_REQUESTFORM_HPP_
# define ROBOTOMY_REQUESTFORM_HPP_

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;
}; 

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs); 

#endif