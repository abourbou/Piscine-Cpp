#include "Enemy.hpp"

Enemy::Enemy(void) : _Type("none"), _HP(0)
{
}

Enemy::Enemy(int hp, std::string type): _Type(type), _HP(hp)
{
}

Enemy::Enemy(const Enemy &rhs)
{
	*this = rhs;
}

Enemy::~Enemy(void)
{
}

Enemy				&Enemy::operator=(const Enemy &rhs)
{
	this->_Type = rhs._Type;
	this->_HP = rhs._HP;
	return (*this);
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		_HP -= damage;
		std::cout << _Type << " takes damages and has " << ((_HP >= 0) ? _HP : 0) << " HP left" << std::endl;
	}
	else
		std::cout << _Type << " takes no damages";
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Enemy::getType(void) const
{
	return (_Type);
}

int					Enemy::getHP(void) const
{
	return (_HP);
}
