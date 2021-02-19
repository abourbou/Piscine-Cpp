#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &rhs);
		~Character(void);
		Character			&operator=(const Character &rhs);

		void recoverAP(void);
		void equip(AWeapon* new_weapon);
		void attack(Enemy* enemy);
//		GETTER // SETTER

		AWeapon				*geteq_weap(void) const;
		int					getAP(void) const;
		std::string			getname(void) const;

	private:
		std::string			_name;
		AWeapon				*_eq_weap;
		int					_AP;
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif