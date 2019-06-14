#include "span.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "\x1b[35mEnter value greater than 0:\t\x1b[0m" << std::endl;
		return (0);
	}

	unsigned int i = atoi(argv[1]);
	srand(time(0));

	if (i <= 0) {
		std::cout << "\x1b[35mEnter value greater than 0:\t\x1b[0m" << std::endl;
		return (0);
	}

	Span test(i);
	unsigned int x = 0;
	int y = 0;

	std::cout << "Storage vector of size \x1b[32m" << i << std::endl << std::endl
    << "\x1b[35mPopulated vector with random values (max 10 elements per row)\x1b[0m" << std::endl;
	while (x < i) {
		y = rand() % 10000;
		test.addNumber(y);
		std::cout << "[" << y << "]\t";
		if ((x + 1) % 10 == 0)
			std::cout << std::endl;
		x++;
	}

	std::cout << std::endl << std::endl << "Total Number of Iterations:\t\x1b[32m" << x << "\x1b[0m";

	try
	{
		std::cout << std::endl << std::endl << "Smallest span value in storage:\t\x1b[32m" << test.shortestSpan() << std::endl
        << "\x1b[0mLargest value in storage:\t\x1b[32m" << test.longestSpan() << std::endl << std::endl
        << "\x1b[0mNow adding one more to show error handling" << std::endl;
	}
	catch (Span::NotEnoughValuesException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Not enough values to find any span." << std::endl;
	}

	try
	{
		test.addNumber(rand() % 10000);
	}
	catch (Span::StorageLimitException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "What?" << std::endl;
	}

	return (0);
}