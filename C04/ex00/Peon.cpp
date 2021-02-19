#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &rhs)
{
	*this = rhs;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon				&Peon::operator=(const Peon &rhs)
{
	(void)rhs;
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->getname() << " was just polymorphed into a pink pony!" << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/
