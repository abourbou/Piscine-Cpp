#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &rhs) : AMateria("ice")
{
	*this = rhs;
}

Ice::~Ice(void)
{
	std::cout << "I'm melting..." << std::endl;
}

Ice					&Ice::operator=(const Ice &rhs)
{
	this->_xp = rhs.getXP();
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria *new_mat = new Ice(*this);

	return (new_mat);
}

void	Ice::use(ICharacter &target)
{
	this->AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
