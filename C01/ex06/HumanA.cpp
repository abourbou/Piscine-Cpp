/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:57:22 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 21:08:38 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const my_name, Weapon const &weapon)
: name(my_name), _my_weapon(weapon)
{
	//std::cout << "address weapon : " << &this->_my_weapon << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his ";
	std::cout << (this->_my_weapon).getType() << std::endl;
}