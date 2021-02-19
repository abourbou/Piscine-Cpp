#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &rhs);
		~PlasmaRifle(void);
		PlasmaRifle			&operator=(const PlasmaRifle &rhs);
		void				attack(void) const;

//		GETTER // SETTER


	private:
};

#endif