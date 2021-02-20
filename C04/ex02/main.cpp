/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:07:54 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/20 17:20:50 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void	list_marine(Squad *squad)
{
	int	i = 0;

	std::cout << "nbr units in the squad : " << squad->getCount() << std::endl; 
	while (i < squad->getCount())
	{
		ISpaceMarine*	cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		i++;
	}
}

int		main(void)
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	Squad	*duo_team = new Squad;

	std::cout << "****************" << std::endl;
	std::cout << "TEST DUO TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	duo_team->push(bob);
	duo_team->push(jim);
	list_marine(duo_team);
	
	std::cout << std::endl;
	
	std::cout << "****************" << std::endl;
	std::cout << "TEST BIGGER TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	Squad	*bigger_troup = new Squad;
	ISpaceMarine*	joe = new TacticalMarine;
	bigger_troup->push(joe);
	std::cout << "****************" << std::endl;
	std::cout << "TEST BIGGER TEAM = DUO TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	*bigger_troup = *duo_team;

	std::cout << "CREATION OF FRANCK (TERMINATOR)" << std::endl; 	
	ISpaceMarine*	franck= new AssaultTerminator;
	bigger_troup->push(franck);
	std::cout << "****************" << std::endl;
	std::cout << "TEST BIGGER TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	list_marine(bigger_troup);
	std::cout << "****************" << std::endl;
	std::cout << "TEST DUO TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	list_marine(duo_team);
	delete duo_team;
	std::cout << "****************" << std::endl;
	std::cout << "TEST BIGGER TEAM" << std::endl;  
	std::cout << "****************" << std::endl;
	list_marine(bigger_troup);
	delete bigger_troup;

	return (0);
}