/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:43:44 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/27 18:34:26 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annonce(void)
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")>" << " Braiiiiiinnnssss ... " << std::endl;
}
