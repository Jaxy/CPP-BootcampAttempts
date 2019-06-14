#include "easyfind.hpp"


int main(int argc, char **argv)
{
	srand(time(0));
	if (argc != 2) {
		std::cout << "\x1b[35mEnter index value to search in list (1 - 9):\t\x1b[0m" << std::endl;
		return (0);
	}

    //Random population of list
	std::list<int> list;
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);

    //Display list of values
    int i = 0;
    for (std::list<int>::const_iterator iterator = list.begin(), end = list.end(); iterator != end; ++iterator, i++) {
        std::cout << "Index " << i << " :\t" << *iterator << std::endl;
    }

	int search = atoi(argv[1]);
	if (search < 0 || search > 9 || (((((std::string)argv[1]).compare("0")) != 0) && (search == 0))) {
		std::cout << "\x1b[35mEnter index value to search in list (1 - 9):\t\x1b[0m" << std::endl;
		return (0);
	}

	try
	{
		int ret = easyfind(list, search);
		std::cout << "Found value \x1b[32m" << search << "\x1b[0m at index \x1b[32m" << ret << "\x1b[0m" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\x1b[31mValue not found\x1b[0m" << std::endl;
	}
	return 0;
}