/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:42:50 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:46:17 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string new_type)
{
	this->_type = new_type;
}

std::string	ZombieEvent::getZombieType(void) const
{
	return (this->_type);
}

ZombieEvent::ZombieEvent(std::string default_type)
{
		this->setZombieType(default_type);
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	Zombie	*new_zombie = new Zombie(this->getZombieType(), name);

	return (new_zombie);
}