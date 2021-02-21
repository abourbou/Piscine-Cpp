#include "Character.hpp"

Character::Character(void) : _name("none"), _nbr_mat(0)
{
	memset(&_inventory, 0, 4 * sizeof(AMateria *));
}

Character::Character(const Character &rhs): _nbr_mat(0)
{
	memset(&_inventory, 0, 4 * sizeof(AMateria *));
	*this = rhs;
}

Character::Character(std::string name): _name(name), _nbr_mat(0)
{
	memset(&_inventory, 0, 4 * sizeof(AMateria *));
}

Character::~Character(void)
{
	int	i = 0;
	while (i < 4 && i < _nbr_mat)
	{
		delete _inventory[i];
		i++;
	}
	std::cout << _name << " fought with courage but he died in battle" << std::endl;
}

Character			&Character::operator=(const Character &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	int	i = 0;
	while (i < _nbr_mat)
	{
		delete this->_inventory[i];
		_inventory[i] = 0;
		i++;
	}
	i = 0;
	while (i < rhs._nbr_mat)
	{
		this->equip(rhs._inventory[i]->clone());
		i++;
	}
	return (*this);
}

void		Character::equip(AMateria *m)
{
	int	i = 0;

	if (!m)
		return ;
	if (_nbr_mat == 4 || !m)
		return ;
	while (i < _nbr_mat)
	{
		if (_inventory[i] == m)
			return ;
		i++;
	}
	_inventory[_nbr_mat] = m;
	_nbr_mat++;
}

void		Character::unequip(int idx)
{
	if (idx >= _nbr_mat || idx < 0)
		return ;
	_inventory[idx] = 0;
	while (idx < 3 && _inventory[idx + 1])
	{
		_inventory[idx] = _inventory[idx + 1];
		idx++;
	}
	_nbr_mat--;
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx >= _nbr_mat || idx < 0)
		return ;
	std::cout << this->_name << " use the N" << idx << " materia" << std::endl;
	(*_inventory[idx]).use(target);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string const	&Character::getName(void) const
{
	return (_name);
}
