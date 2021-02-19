#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _APCost(0), _Damage(0), _Name("none")
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _APCost(apcost), _Damage(damage), _Name(name)
{
}

AWeapon::AWeapon(const AWeapon &rhs)
{
	*this = rhs;
}

AWeapon::~AWeapon(void)
{
}

AWeapon				&AWeapon::operator=(const AWeapon &rhs)
{
	this->_APCost = rhs._APCost;
	this->_Damage = rhs._Damage;
	this->_Name = rhs._Name;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					AWeapon::getAPCost(void) const
{
	return (_APCost);
}

int					AWeapon::getDamage(void) const
{
	return (_Damage);
}

std::string			AWeapon::getName(void) const
{
	return (_Name);
}
