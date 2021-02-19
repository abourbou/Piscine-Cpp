#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &rhs)
{
	*this = rhs;
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant			&SuperMutant::operator=(const SuperMutant &rhs)
{
	this->Enemy::operator=(rhs);
	return (*this);
}

void		SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}

	/********************************

			GETTER // SETTER

	********************************/
