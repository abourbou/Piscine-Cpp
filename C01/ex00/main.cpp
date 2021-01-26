/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:38:27 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/26 18:24:24 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony	*PonyOnTheHeap(int const murder)
{
	int		i;
	Pony	*Heap_pony = new Pony(0, "pink");

	i = 0;
	while(i < murder)
	{
		Heap_pony->MURDER();
		i++;
	}
	std::cout << "kill : " << Heap_pony->nbr_human_kill << std::endl;
	if (Heap_pony->actually_a_licorn)
		std::cout << "I'm a licorn!" << std::endl;
	std::cout << "My color is " << Heap_pony->color << std::endl;
	delete Heap_pony;
	return (Heap_pony);
}

Pony	*PonyOnTheStack(int const murder)
{
	int		i;
	Pony	Stack_pony = Pony(10, "Blue");

	i = 0;
	while(i < murder)
	{
		Stack_pony.MURDER();
		i++;
	}
	std::cout << "kill : " << Stack_pony.nbr_human_kill << std::endl;
	if (Stack_pony.actually_a_licorn)
		std::cout << "I'm a licorn!" << std::endl;
	std::cout << "My color is " << Stack_pony.color << std::endl;
	return (&Stack_pony);
}

int	main(void)
{
	Pony *pPony;

	pPony = PonyOnTheHeap(1500);
	std::cout << pPony->color << std::endl;
	pPony = PonyOnTheStack(500);
	std::cout << pPony->color << std::endl;

	return (0);
}