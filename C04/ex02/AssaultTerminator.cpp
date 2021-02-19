#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &rhs)
{
	std::cout << "* teleports from space *" << std::endl;
	(void)rhs;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	AssaultTerminator *new_terminator = new AssaultTerminator;
	return (new_terminator);
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
