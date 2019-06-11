#ifndef OFFICE_BLOCK_HPP_
# define OFFICE_BLOCK_HPP_

// #include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class OfficeBlock
{
	private:
    OfficeBlock(OfficeBlock &obj);
    OfficeBlock &operator=(OfficeBlock const &rhs);

    Intern *_intern;
    Bureaucrat *_signer;
    Bureaucrat *_executer;

	public:
    OfficeBlock();
    OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer);
    virtual ~OfficeBlock();

    void setIntern(Intern &obj);
    void setSigner(Bureaucrat &obj);
    void setExecutor(Bureaucrat &obj);

    void doBureaucracy(std::string form, std::string target);

    int getIntern();
    int getSigner();
    int getExecuter();
    int getAll();

    Bureaucrat	retSigner();
    Bureaucrat	retExecuter();

    class NoInternException : public std::exception
    {
        public:
        NoInternException();
        NoInternException(NoInternException const &obj);
        NoInternException &operator=(NoInternException const &rhs);
        ~NoInternException() throw();
        virtual const char* what() const throw();
    };

    class NoSignerException : public std::exception
    {
        public:
        NoSignerException();
        NoSignerException(NoSignerException const &obj);
        NoSignerException &operator=(NoSignerException const &rhs);
        ~NoSignerException() throw();
        virtual const char* what() const throw();
    };

    class NoExecuterException : public std::exception
    {
        public:
        NoExecuterException();
        NoExecuterException(NoExecuterException const &obj);
        NoExecuterException &operator=(NoExecuterException const &rhs);
        ~NoExecuterException() throw();
        virtual const char* what() const throw();
    };

    class SignerLowGradeException : public std::exception
    {
        public:
        SignerLowGradeException();
        SignerLowGradeException(SignerLowGradeException const &obj);
        SignerLowGradeException &operator=(SignerLowGradeException const &rhs);
        ~SignerLowGradeException() throw();
        virtual const char* what() const throw();
    };

    class ExecuterLowGradeException : public std::exception
    {
        public:
        ExecuterLowGradeException();
        ExecuterLowGradeException(ExecuterLowGradeException const &obj);
        ExecuterLowGradeException &operator=(ExecuterLowGradeException const &rhs);
        ~ExecuterLowGradeException() throw();
        virtual const char* what() const throw();
    };
}; 

#endif