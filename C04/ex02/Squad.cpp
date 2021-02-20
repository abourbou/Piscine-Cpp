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
	if (this == &rhs)
		return (*this);
	this->_destroy_lunits();

	t_list	*current = rhs._lunits;
	while (current)
	{
		this->push(current->unit->clone());
		current = current->next;
	}
	this->_nbr_units = rhs._nbr_units;
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
	return (1);
}

void	Squad::_destroy_lunits(void)
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
	_lunits = 0;
	_nbr_units = 0;
}