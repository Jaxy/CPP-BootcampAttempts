#ifndef EASY_FIND_HPP_
#define EASY_FIND_HPP_

#include <iostream>
#include <list>

template <typename T> int easyfind(T list, int value)
{
	std::list<int>::const_iterator iter = list.begin(); 
	std::list<int>::const_iterator iter2 = list.end();

	ptrdiff_t	i = 0;

	try
	{
		while (iter != iter2)
		{
			if (*iter == value)
				return (i);
			iter++;
			i++;
		}
	}
	catch (std::exception& e)
	{
		throw std::exception();
	}
	if (iter != list.end())
		return (i);
	throw std::exception();
}

#endif