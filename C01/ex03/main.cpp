/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:22:25 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 18:35:46 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde Troup(3, "troup");
	Troup.annonce();

	ZombieHorde Horde(10, "horde");
	Horde.annonce();
	
	ZombieHorde Zero(0, "zero");
	Zero.annonce();
	return (0);
}