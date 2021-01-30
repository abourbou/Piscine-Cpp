/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:43:44 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:47:14 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annonce(void) const
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")>" << " Braiiiiiinnnssss ... " << std::endl;
}
