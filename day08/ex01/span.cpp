#include "span.hpp"

Span::Span(unsigned int n) : _size(n) {
	_store.reserve(n);
	return;
}

Span::Span(Span &obj) {
	*this = obj;
	return;
}

Span::~Span() {
	return;
}

Span & Span::operator=(Span const &rhs)  {
	this->_store = rhs._store;
	return (*this);
}

void Span::addNumber(int num) {
	if (_store.size() < _size)
		_store.push_back(num);
	else
		throw Span::StorageLimitException();
}

int Span::shortestSpan() {
	if (_size <= 1)
		throw Span::NotEnoughValuesException();
	std::vector<int> copy = _store;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator it  = copy.begin();
	std::vector<int>::iterator one = copy.begin();
	std::vector<int>::iterator two = copy.end();
	it++;
	two--;
	unsigned int i = 0;
	
	while (i < (_size - 1)) {
		if (abs(*one - *it) < abs(*one - *two))
			two = it;
		else if (abs(*two - *it) < abs(*one - *two))
			one = it;
		i++;
		it++;
	}
	return (abs(*one - *two));
}

int Span::longestSpan() {
	if (_size <= 1)
		throw Span::NotEnoughValuesException();
	std::vector<int>	max = _store;
	return(*std::max_element(max.begin(), max.end()) - *std::min_element(max.begin(), max.end()));
}

Span::StorageLimitException::StorageLimitException() {
	return;
}

Span::StorageLimitException::StorageLimitException(StorageLimitException const &obj) {
	*this = obj;
	return;
}

Span::StorageLimitException::~StorageLimitException() throw() {
	return;
}

Span::StorageLimitException &Span::StorageLimitException::operator=(StorageLimitException const &rhs) {
	(void)rhs;
	return (*this);
}

const char* Span::StorageLimitException::what() const throw() {
	return ("\x1b[31mError: Storage capacity is maxed.\x1b[0m");
}

Span::NotEnoughValuesException::NotEnoughValuesException() {
	return;
}

Span::NotEnoughValuesException::NotEnoughValuesException(NotEnoughValuesException const &obj) {
	*this = obj;
	return;
}

Span::NotEnoughValuesException::~NotEnoughValuesException() throw() {
	return;
}

Span::NotEnoughValuesException &Span::NotEnoughValuesException::operator=(NotEnoughValuesException const &rhs) {
	(void)rhs;
	return (*this);
}

const char* Span::NotEnoughValuesException::what() const throw() {
	return ("\x1b[31mError: Not enough values in storage to determine span\x1b[0m");
}