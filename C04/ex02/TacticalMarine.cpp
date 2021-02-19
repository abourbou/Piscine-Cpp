#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &rhs)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
	(void)rhs;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine			&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
	TacticalMarine *new_marine = new TacticalMarine;
	return (new_marine);
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attack with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attack with a chainsword *" << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/
