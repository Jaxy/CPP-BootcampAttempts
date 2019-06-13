#include "Base.hpp"
#include "ABC.hpp"

Base *generate(void)
{
	int r = rand() % 3;

	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "\x1b[36mA\x1b[0m" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "\x1b[32mB\x1b[0m" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "\x1b[33mC\x1b[0m" << std::endl;
}

void reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "\x1b[36mA\x1b[0m" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "\x1b[32mB\x1b[0m" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "\x1b[33mC\x1b[0m" << std::endl;
}

int	main()
{
	srand(time(0));
	std::cout << "\x1b[35mRandom instantiation\x1b[0m" << std::endl;
	Base *test = generate();
	std::cout << "Class identification via pointer:\t";
	pointer(test);
	std::cout << "Class identification via reference:\t";
	reference(*test);
	delete test;
	return (0);
}