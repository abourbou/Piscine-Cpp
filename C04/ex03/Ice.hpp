#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice
{
	public:
		Ice(void);
		Ice(const Ice &rhs);
		~Ice(void);
		Ice			&operator=(const Ice &rhs);
		AMateria*	clone(void) const;
		void		use(ICharacter &target);

//		GETTER // SETTER
		int					getXP(void) const;
		std::string const	getType(void) const;

	private:
		int					_xp;
		const std::string	_type;
};

#endif