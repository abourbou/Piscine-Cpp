/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:39:43 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 20:04:09 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string default_type) : _type(default_type)
{
}

const std::string &Weapon::getType(void) const
{
	const std::string &ref = this->_type;

	return (ref);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
