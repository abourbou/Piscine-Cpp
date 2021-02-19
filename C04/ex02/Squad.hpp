#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad(void);
		Squad(const Squad &rhs);
		~Squad(void);
		Squad			&operator=(const Squad &rhs);
		int		getCount(void) const;
		ISpaceMarine*	getUnit(int nbr_unit) const;
		int		push(ISpaceMarine* new_recruit);

	private:
		t_list	*_lunits;
		int		_nbr_units;
};

#endif