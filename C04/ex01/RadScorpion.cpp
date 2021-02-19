#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &rhs)
{
	*this = rhs;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion			&RadScorpion::operator=(const RadScorpion &rhs)
{
	this->Enemy::operator=(rhs);
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/
