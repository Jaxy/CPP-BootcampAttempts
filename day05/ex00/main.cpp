#include "Bureaucrat.hpp"

int	main()
{
	int i = 0;
	int x = 0;
	Bureaucrat bureaucrat("Bob", 42);
	std::cout << "\x1b[35mOveriding: \x1b[0m" << std::endl << bureaucrat << std::endl;
	std::cout << "\x1b[35mTesting for high/low grade exceptions\x1b[0m" << std::endl;
	while(i++ < 5) {
		try
		{
			if (i % 2 == 0)
				x = 0;
			else
				x = 151;
			Bureaucrat bureaucrat2("Error Testing", x);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "\x1b[35mTesting incrementation of grades\x1b[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat3("Random", 3);
		std::cout << bureaucrat3;
		i = 0;
		while (i++ < 10)
		{
			std::cout << "Incremented " << bureaucrat3.getName() << "'s grade. Old grade: " << bureaucrat3.getGrade() << ". New Grade: ";
			bureaucrat3 += 1;
			std::cout << bureaucrat3.getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\x1b[35mTesting decrementation of grades\x1b[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat4("Modnar", 145);
		std::cout << bureaucrat4;
		i = 0;
		x = 0;
		while (i++ < 10)
		{
			if (i % 2 == 0)
				x = 2;
			else
				x =  3;
			std::cout << "Decremented " << bureaucrat4.getName() << "'s grade. Old grade: " << bureaucrat4.getGrade() << ". New Grade: ";
			bureaucrat4 -= x;
			std::cout << bureaucrat4.getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}