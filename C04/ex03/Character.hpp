#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const Character &rhs);
		Character(std::string name);
		~Character(void);
		Character	&operator=(const Character &rhs);
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

//		GETTER // SETTER

		std::string	const &getName(void) const;

	private:
		std::string		_name;
		AMateria		*_inventory[4];
		int				_nbr_mat;
};

#endif