/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:36:12 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/04 22:55:31 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const integer) : _value(integer << _width)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floated) : _value(roundf(floated * 256.0))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &cpy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = cpy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / 256.0);
}

int		Fixed::toInt(void) const
{
	return (_value >> _width);
}

std::ostream	& operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}