#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input) {
	return;
}

Convert::Convert(Convert &obj) {
	*this = obj;
	return;
}

Convert &Convert::operator=(Convert const &rhs) {
	this->_input = rhs._input;
	return (*this);
}

Convert::~Convert() {
	return;
}

Convert::operator char() const {
	int ret = 0;

	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrorException());
	}
	return (static_cast<char>(ret));
}

Convert::operator int() const {
	int ret = 0;
	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrorException());
	}
	return (ret);
}

Convert::operator float() const {
	float ret = 0.0;
	try
	{
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrorException());
	}
	return (ret);
}

Convert::operator double() const {
	float ret = 0.0;
	try
	{
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrorException());
	}
	return (ret);
}

Convert::ConvertErrorException::ConvertErrorException() {
	return;
}

Convert::ConvertErrorException::ConvertErrorException(ConvertErrorException const &obj) {
	*this = obj;
	return;
}

Convert::ConvertErrorException::~ConvertErrorException() throw() {
	return;
}

Convert::ConvertErrorException &Convert::ConvertErrorException::operator=(ConvertErrorException const &rhs) {
	(void)rhs;
	return (*this);
}

const char* Convert::ConvertErrorException::what() const throw() {
	return ("impossible");
}