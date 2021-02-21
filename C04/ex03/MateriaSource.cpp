#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	memset(_source, 0, 4 * sizeof(AMateria *));
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	memset(_source, 0, 4 * sizeof(AMateria *));
	*this = rhs;
}

MateriaSource::~MateriaSource(void)
{
	int		i = 0;
	while (i < 4 && _source[i])
	{
		delete _source[i];
		i++;
	}
	std::cout << "The source get exhausted" << std::endl;
}

MateriaSource			&MateriaSource::operator=(const MateriaSource &rhs)
{
	int	i = 0;
	while (_source[i])
	{
		delete (_source[i]);
		i++;
	}
	while (i < 4 && rhs._source[i] != 0)
	{
		learnMateria(rhs._source[i]->clone());
		i++;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *am)
{
	int	i = 0;
	while (_source[i] && i < 4)
		i++;
	if (i == 4)
		return ;
	_source[i] = am;
}

AMateria	*MateriaSource::createMateria(std::string const &type) const
{
	int	i = 0;

	while (i < 4 && _source[i])
	{
		if (type == _source[i]->getType())
			return (_source[i]->clone());
		i++;
	}
	return (0);
}
