/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:57:22 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 21:15:39 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const my_name)
: name(my_name)
{}

void	HumanB::setWeapon(Weapon &new_weap)
{
	this->_my_weapon = &new_weap;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his ";
	if (this->_my_weapon)
		std::cout << this->_my_weapon->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;
}