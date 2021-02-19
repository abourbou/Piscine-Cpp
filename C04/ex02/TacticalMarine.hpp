#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine &rhs);
		~TacticalMarine(void);
		TacticalMarine	&operator=(const TacticalMarine &rhs);
		ISpaceMarine*	clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
//		GETTER // SETTER


	private:
};

#endif