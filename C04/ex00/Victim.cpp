#include "Victim.hpp"

Victim::Victim(void) : _name("none")
{
	std::cout << "A random victim with no name just appeared!" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &rhs)
{
	*this = rhs;
}

Victim::~Victim(void)
{
	std::cout << "A random victim " << _name << " died for no apparent reasons!" << std::endl;
}

Victim				&Victim::operator=(const Victim &rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	std::cout << "I'm " << rhs.getname() << " and I like otters!" << std::endl;
	return (o);
}

void		Victim::introduce(void)
{
	std::cout << "I'm " << _name << " and I like otters!" << std::endl;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Victim::getname(void) const
{
	return (_name);
}
