#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>

class Span {
	public:
    Span();
    Span(unsigned int n);
    Span(Span &obj);
    Span &operator=(Span const &rhs);
    virtual ~Span();

    class StorageLimitException : public std::exception
    {
        public:  
        StorageLimitException();
        StorageLimitException(StorageLimitException const &obj);
        StorageLimitException &operator=(StorageLimitException const &rhs);
        virtual ~StorageLimitException() throw();
        virtual const char* what() const throw();
    };

    class NotEnoughValuesException : public std::exception
    {
        public:
            NotEnoughValuesException();
            NotEnoughValuesException(NotEnoughValuesException const &obj);
            NotEnoughValuesException &operator=(NotEnoughValuesException const &rhs);
            virtual ~NotEnoughValuesException() throw();
            virtual const char* what() const throw();
    };

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();

	private:
    std::vector<int> _store;
    unsigned int _size;
}; 

#endif