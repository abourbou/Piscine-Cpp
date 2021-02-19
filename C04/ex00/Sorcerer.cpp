#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : m_title("none"), m_name("none")
{
	std::cout << "An average sorcerer is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string title, std::string name) : m_title(title), m_name(name)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

void			Sorcerer::introduce(void) const
{
	std::cout << "I'm " << m_name << ", " << m_title << ", and I like ponies!" << std::endl;
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

Sorcerer::Sorcerer(const Sorcerer &rhs)
{
	*this = rhs;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer			&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->m_title = rhs.m_title;
	this->m_name = rhs.m_name;
	return (*this);
}

std::ostream	& operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I'm " << rhs.getname() << ", " << rhs.gettitle() << ", and I like ponies!" << std::endl;
	return (o);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Sorcerer::gettitle(void) const
{
	return (m_title);
}

std::string			Sorcerer::getname(void) const
{
	return (m_name);
}
