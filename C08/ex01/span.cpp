#include "span.hpp"

span::span(void) : _size(0)
{
}

span::span(const unsigned int n) : _size(n)
{
}

span::span(const span &rhs)
{
	*this = rhs;
}

span::~span(void)
{
}

span				&span::operator=(const span &rhs)
{
	if (this == &rhs)
		return (*this);
	_size = rhs._size;
	_vect = rhs._vect;
	return (*this);
}

void		span::addNumber(int nbr)
{
	if (static_cast<unsigned int>(_vect.size()) == _size)
		throw(SpanFull());
	_vect.resize(_vect.size() + 1, nbr);
}

void		span::addnNumber(int nbr, unsigned int n)
{
	if (static_cast<unsigned int>(_vect.size()) + n > _size)
		throw(SpanFull());
	_vect.resize(_vect.size() + n, nbr);
}

unsigned int	span::shortestSpan(void) const
{
	if (_vect.size() < 2)
		throw(NotEnoughtElem());
	std::vector<int>	copy(_vect);
	sort(copy.begin(), copy.end());
	unsigned int	shortest = std::numeric_limits<unsigned int>::max();
	for (std::vector<int>::iterator it = copy.begin(); it < copy.end() - 1; ++it)
	{
		if (static_cast<unsigned int>(*(it + 1) - *it) < shortest)
			shortest = *(it + 1) - *it;
	}
	return (shortest);
}

unsigned int	span::longestSpan(void) const
{
	if (_vect.size() < 2)
		throw(NotEnoughtElem());
	int	min_vect = *std::min_element(_vect.begin(), _vect.end());
	int	max_vect = *std::max_element(_vect.begin(), _vect.end());
	return (max_vect - min_vect);
}