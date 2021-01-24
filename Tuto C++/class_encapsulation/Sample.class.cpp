/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:25:12 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/23 20:26:04 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo : " << this->publicFoo << std::endl;

	this->_privateFoo = 0;
	std::cout << "this->_privateFoo : " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" <<std::endl;
	return;
}

void	Sample::publicBar(void) const
{
	std::cout << "publicBar called" <<std::endl;
	return;
}

void	Sample::_privateBar(void) const
{
	std::cout << "privateBar called" <<std::endl;
	return;
}