#include "Ice.hpp"

Ice::Ice(void) : _xp(0), _type("ice")
{
}

Ice::Ice(const Ice &rhs) : _type("ice")
{
	*this = rhs;
}

Ice::~Ice(void)
{
}

Ice					&Ice::operator=(const Ice &rhs)
{
	this->_xp = rhs._xp;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					Ice::getXP(void) const
{
	return (_xp);
}

std::string const	Ice::getType(void) const
{
	return (_type);
}
