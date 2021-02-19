/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:07:54 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/19 15:23:04 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;

	ISquad	*duo_team = new Squad;
	duo_team->push(bob);
	duo_team->push(jim);

	int	i = 0;
	while (i < duo_team->getCount())
	{
		ISpaceMarine*	cur = duo_team->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete duo_team;

	return (0);
}