#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	int i = 0;
	int x = 0;

	Bureaucrat bureaucrat("Bob", 42);
	std::cout << bureaucrat << std::endl;

	Form form("Form1", 100, 100);
	form.beSigned(bureaucrat);
	form.beSigned(bureaucrat);

	std::cout << std::endl << "\x1b[35mAttempting to create forms for exception testing\x1b[0m" << std::endl;
	while(i++ < 5) {
		try
		{
			if (i % 2 == 0)
				x = 0;
			else
				x = 151;
			Form form2("Error Testing", x, x);
		}
		catch (Form::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "\x1b[35mCreating new bureaucrat and form\x1b[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat2("Random", 100);
		std::cout << bureaucrat2;

		Form form3("Form3", 50, 50);
		std::cout << form3;
		form3.beSigned(bureaucrat2);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}