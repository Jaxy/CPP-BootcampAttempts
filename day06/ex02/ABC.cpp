#include "ABC.hpp"

A::A(void)
{
	return;
}

A::A(A &obj)
{
	*this = obj;
	return;
}

A::~A(void)
{
	return;
}

A &A::operator=(A const &r) 
{
	(void)r;
	return (*this);
}

B::B(void)
{
	return;
}

B::B(B &obj)
{
	*this = obj;
	return;
}

B::~B(void)
{
	return;
}

B &B::operator=(B const &r) 
{
	(void)r;
	return (*this);
}

C::C(void)
{
	return;
}

C::C(C &obj)
{
	*this = obj;
	return;
}

C::~C(void)
{
	return;
}

C &C::operator=(C const &r) 
{
	(void)r;
	return (*this);
}