#include <iostream>
#include <iomanip>

template <typename T> void print_array(T &data) {
	std::cout << data << std::endl;
}

template <typename T> void iter(T *addr, size_t length, void (*func)(T &)) {
	size_t i = -1;

	while (++i < length)
		(*func)(addr[i]);
}

int main() {
	std::string	test[] = { "J", "JA", "JAS", "JASM", "JASMI", "JASMIN", "JASMINE" };

	char test2[] = { 'J', 'A', 'S', 'M', 'I', 'N', 'E', ' ', 'C', 'O', 'D', 'E', 'S' };

	int 	test3[] = { 1, 12, 123, 1234, 12345 };

	double 	test4[] = { 1.00, 1.20, 12.30, 12.34, 123.45 };

	std::cout << "\x1b[35mPrinting array of strings\x1b[0m" << std::endl;
	iter<std::string>(test, sizeof(test)/sizeof(*test), &print_array<std::string>);

	std::cout << std::endl << "\x1b[35mPrinting array of chars\x1b[0m" << std::endl;
	iter<char>(test2, sizeof(test2)/sizeof(*test2), &print_array<char>);

	std::cout << std::endl << "\x1b[35mPrinting an array of int\x1b[0m" << std::endl;
	iter<int>(test3, sizeof(test3)/sizeof(*test3), &print_array<int>);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl << "\x1b[35mPrinting an array of double\x1b[0m" << std::endl;
	iter<double>(test4, sizeof(test4)/sizeof(*test4), &print_array<double>);

	return (0);
}