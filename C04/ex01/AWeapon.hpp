#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &rhs);
		virtual ~AWeapon(void);
		AWeapon				&operator=(const AWeapon &rhs);

//		GETTER // SETTER

		int					getAPCost(void) const;
		int					getDamage(void) const;
		std::string			getName(void) const;
		virtual void		attack(void) const =0;

	private:
		int					_APCost;
		int					_Damage;
		std::string			_Name;
};

#endif