/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:57:22 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 22:08:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const my_name, Weapon starting_weapon)
: name(my_name), my_weapon(starting_weapon)
{}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->my_weapon.getType() << std::endl;
}