#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &rhs)
{
	*this = rhs;
}

PowerFist::~PowerFist(void)
{
}

PowerFist			&PowerFist::operator=(const PowerFist &rhs)
{
	this->AWeapon::operator=(rhs);
	return (*this);
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
	/********************************

			GETTER // SETTER

	********************************/
