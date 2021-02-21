/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 09:37:06 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/21 14:01:04 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("none"), _xp(0)
{
}

AMateria::AMateria(const AMateria &rhs): _type(rhs._type), _xp(rhs._xp)
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	_xp = rhs._xp;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

unsigned int	AMateria::getXP(void) const
{
	return (_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}