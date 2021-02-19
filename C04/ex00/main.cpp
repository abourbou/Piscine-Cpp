/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:03:13 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/19 10:24:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	Sorcerer Harry("Harry", "tu es un sorcier");

	Harry.introduce();
	std::cout << Harry;

	Victim	Ron("Ron Wesley");

	Ron.introduce();
	std::cout << Ron;

	Peon	Neuville("Neuville Londubat");
	Neuville.introduce();
	std::cout << Neuville;

	Harry.polymorph(Ron);
	Harry.polymorph(Neuville);

	return (0);
}