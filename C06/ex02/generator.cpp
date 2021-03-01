/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:12:48 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 21:44:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "generator.hpp"

Base	*generator(void)
{
	static int	initilization;
	if (!initilization)
	{
		srand(time(0));
		initilization = 1;
	}
	int	nbr = rand() % 3;
	if (nbr == 0)
	{
		std::cout << "A is created" << std::endl;
		return (new A);
	}
	if (nbr == 1)
	{
		std::cout << "B is created" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C is created" << std::endl;
		return (new C);
	}
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "D: La reponse D" << std::endl;
}

void	identify_from_reference(Base &p)
{
	Base	try_it;
	try
	{
		try_it = dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		try_it = dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		try_it = dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(const std::bad_cast& e)
	{}
}