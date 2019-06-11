#include "CentralBureaucracy.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "OfficeBlock.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	srand(time(0));
	Intern whocares;

	int i = 0;

	while (i < 20)
	{
		_ob[i].setIntern(whocares);
		i++;
	}
	return;
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &obj)
{
	*this = obj;
	return;
}

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy &rhs) 
{
	int i = 0;
	Bureaucrat *copy = new Bureaucrat;

	while (rhs._target[i] != "")
	{
		this->_target[i] = rhs._target[i];
		i++;
	}

	i = 0;
	while (rhs._ob[i].getSigner() == 1)
	{
		*copy = rhs._ob[i].retSigner();
		_ob[i].setSigner(*copy);
		i++;
	}

	i = 0;
	while (rhs._ob[i].getExecuter() == 1)
	{
		*copy = rhs._ob[i].retExecuter();
		_ob[i].setExecutor(*copy);
		i++;
	}

	delete copy;
	return (*this);
}

CentralBureaucracy::~CentralBureaucracy()
{
	return;
}

void	CentralBureaucracy::doBureaucracy()
{
	int i = 0;
	int x = 0;

	std::string input[] =
	{
		"Shrubbery Creation",
		"Presidential Pardon",
		"Robotomy Request"
	};

	if (_target[0] == "")
	{
		std::cout << "No targets queue'd, no actions needed to be done" << std::endl;
		return;
	}
	while (_target[i] != "")
	{
		x = rand() % 20;
		if (_ob[x].getAll() == 1)
		{
			_ob[x].doBureaucracy(input[x % 3], _target[i]);
			i++;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "Completed all actions for the bureaucracy" << std::endl;
}

void	CentralBureaucracy::feedSigner(Bureaucrat &obj)
{
	int i = 0;

	while (i < 20)
	{
		if (_ob[i].getSigner() == 0)
		{
			_ob[i].setSigner(obj);
			return;
		}
		i++;
	}
	std::cout << "Central Bureaucracy is full, cannot add more Signers" << std::endl;
	return;
}

void	CentralBureaucracy::feedExecuter(Bureaucrat &obj)
{
	int i = 0;

	while (i < 20)
	{
		if (_ob[i].getExecuter() == 0)
		{
			_ob[i].setExecutor(obj);
			return;
		}
		i++;
	}
	std::cout << "Central Bureaucracy is full, cannot add more Executer" << std::endl;
	return;
}

void	CentralBureaucracy::queueUp(std::string obj)
{
	int i = 0;

	while (i < 100)
	{
		if (_target[i] == "")
		{
			_target[i] = obj;
			return;
		}
		i++;
	}
	std::cout << "Only 100 targets can be queue'd" << std::endl;
	return;
}