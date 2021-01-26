/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:38:56 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/26 17:49:00 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::MURDER(void)
{
	this->nbr_human_kill++;
	if (nbr_human_kill > 1000)
		this->actually_a_licorn = 1;
}