#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &rhs);
		~AssaultTerminator(void);
		AssaultTerminator	&operator=(const AssaultTerminator &rhs);
		ISpaceMarine*	clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;

	private:
};

#endif