#ifndef CONVERT_HPP_
#define CONVERT_HPP_

#include <iostream>
#include <iomanip>

class Convert
{
	private:
    std::string _input;

	public:
    Convert();
    Convert(std::string input);
    Convert(Convert &obj);
    Convert &operator=(Convert const &rhs);
    virtual ~Convert();

    class ConvertErrorException : public std::exception
    {
        public:
        ConvertErrorException();
        ConvertErrorException(ConvertErrorException const &obj);
        ConvertErrorException &operator=(ConvertErrorException const &rhs);
        virtual ~ConvertErrorException() throw();
        virtual const char* what() const throw();
    };

    operator char() const;
    operator int() const;
    operator float() const;
    operator double() const;
}; 

#endif