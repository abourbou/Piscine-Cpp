#include "Squad.hpp"

Squad::Squad(void) : _lunits(0), _nbr_units(0)
{
}

Squad::Squad(const Squad &rhs)
{
	*this = rhs;
}

Squad::~Squad(void)
{
	t_list	*current = _lunits;
	t_list	*next;
	while (current)
	{
		next = current->next;
		delete current->unit;
		delete current;
		current = next;
	}
}

Squad				&Squad::operator=(const Squad &rhs)
{
	this->_lunits = rhs._lunits;
	this->_nbr_units = rhs._nbr_units;

	t_list	*current = this->_lunits;
	while (current)
	{
		ISpaceMarine *new_recruit = _lunits->unit->clone();
		delete(_lunits->unit);
		_lunits->unit = new_recruit;
		current = current->next;
	}
	return (*this);
}

int		Squad::getCount(void) const
{
	return (_nbr_units);
}

ISpaceMarine*	Squad::getUnit(int number) const
{
	int	i = 0;
	t_list	*current = _lunits;

	if (number < 0 || number > _nbr_units - 1)
	{
		std::cout << "This marine doesn't exist" << std::endl;
		return (0);
	}
	std::cout << "i : " << i << std::endl;
	while (i != number)
	{
		current = current->next;
		i++;
	}
	return (current->unit);
}

int		Squad::push(ISpaceMarine* new_recruit)
{
	//test if the new_recruit is a valid element to add to the squad
	if (!new_recruit)
	{
		std::cout << "This recruit doesn't exist!" << std::endl;
		return (0);
	}
	t_list	*current = _lunits;
	while (current)
	{
		if (new_recruit == current->unit)
		{
			std::cout << "this recruit is already into the squad!" << std::endl;
			return (0);
		}
		current = current->next;
	}
	//add the recruit into the squad
	current = _lunits;
	t_list	*new_elem = new	t_list;

	new_elem->unit = new_recruit;
	new_elem->next = 0;
	if (_nbr_units == 0)
		_lunits = new_elem;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_elem;
	}
	_nbr_units++;
	std::cout << "new recruit had to the squad. The squad has " << _nbr_units << " elements" << std::endl;
	return (1);
}