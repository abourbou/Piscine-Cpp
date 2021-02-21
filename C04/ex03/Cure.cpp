#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &rhs) : AMateria("cure")
{
	*this = rhs;
}

Cure::~Cure(void)
{
	std::cout << "It looks like I can't cure death..." << std::endl;
}

Cure					&Cure::operator=(const Cure &rhs)
{
	this->_xp = rhs.getXP();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria *new_mat = new Cure(*this);

	return (new_mat);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
