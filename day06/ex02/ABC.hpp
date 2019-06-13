#ifndef ABC_HPP_
#define ABC_HPP_

#include "Base.hpp"
class A : public Base {
	public:
    A();
    A(A &obj);
    A &operator=(A const &rhs);
    virtual ~A();
};

class B : public Base{
	public:
    B(void);
    B(B &obj);
    B &operator=(B const &rhs);
    virtual ~B();
};

class C : public Base {
	public:
    C(void);
    C(C &obj);
    C &operator=(C const &r);
    virtual ~C(void);
};

#endif