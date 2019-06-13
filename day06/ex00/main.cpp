#include "Convert.hpp"

int	main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Enter a value to convert." << std::endl;
		return (0);
	}
	Convert convert(argv[1]);
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "char: ";
	try
	{
		int check = static_cast<int>(convert);

		if (check >= 33 && check <= 126)
			std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (Convert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "What??" << std::endl;
	}

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(convert) << std::endl;
	}
	catch (Convert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "What?" << std::endl;
	}

	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(convert) << "f" << std::endl;
	}
	catch (Convert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "What?" << std::endl;
	}

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(convert) << std::endl;
	}
	catch (Convert::ConvertErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "What?" << std::endl;
	}

	return (0);
}