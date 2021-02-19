#include "Character.hpp"

Character::Character(void) : _name("none"), _eq_weap(0), _AP(40)
{
}

Character::Character(std::string name): _name(name), _eq_weap(0), _AP(40)
{
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	this->_eq_weap = rhs._eq_weap;
	this->_AP = rhs._AP;
	this->_name = rhs._name;
	return (*this);
}

void	Character::recoverAP(void)
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

void	Character::equip(AWeapon* new_weapon)
{
	_eq_weap = new_weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (!_eq_weap)
		return;
	if (_AP < _eq_weap->getAPCost())
	{
		std::cout << _name << " can't attack : not enought AP" << std::endl;
		return ;
	}
	_AP -= _eq_weap->getAPCost();
	std::cout << _name << " attack " << enemy->getType() << " with a " << _eq_weap->getName() << std::endl;
	_eq_weap->attack();
	enemy->takeDamage(_eq_weap->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	if (!rhs.geteq_weap())
	{
		o << rhs.getname() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	}
	else
	{
		o << rhs.getname() << " has " << rhs.getAP() << " AP and carries a " << rhs.geteq_weap()->getName() << std::endl;
	}
	return (o);
}
	/********************************

			GETTER // SETTER

	********************************/

AWeapon				*Character::geteq_weap(void) const
{
	return (_eq_weap);
}

int					Character::getAP(void) const
{
	return (_AP);
}

std::string			Character::getname(void) const
{
	return (_name);
}
