#ifndef CENTRAL_BUREAUCRACY_HPP_
# define CENTRAL_BUREAUCRACY_HPP_

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

class CentralBureaucracy {
	private:
    OfficeBlock _ob[20];
    std::string _target[100];

	public:
    CentralBureaucracy();
    CentralBureaucracy(CentralBureaucracy &obj);
    virtual ~CentralBureaucracy();
    CentralBureaucracy &operator=(CentralBureaucracy &r);

    void feedSigner(Bureaucrat &obj);
    void feedExecuter(Bureaucrat &obj);
    void queueUp(std::string obj);
    void doBureaucracy();
}; 

#endif