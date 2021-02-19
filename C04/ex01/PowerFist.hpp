#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist &rhs);
		~PowerFist(void);
		PowerFist			&operator=(const PowerFist &rhs);
		void				attack(void) const;
//		GETTER // SETTER


	private:
};
#endif