/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:52:18 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/04 10:15:48 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

void	displayInt(int i)
{
	std::cout << i << " |";
}

int	main(void)
{
	//CREATION CONTAINERS
	std::list<int> my_list;

	my_list.push_back(15);
	my_list.push_back(0);
	my_list.push_back(42);
	std::cout << "LIST:" << std::endl;
	std::for_each(my_list.begin(), my_list.end(), displayInt);
	std::cout << std::endl;
	std::vector<int>	my_vector(4, 42);
	my_vector[2] = 13;
	std::cout << "VECTOR:" << std::endl;
	std::for_each(my_vector.begin(), my_vector.end(), displayInt);
	std::cout << std::endl;
	//TEST EASYFIND
	std::cout << std::endl << "EASYFIND LIST:" << std::endl;
	try
	{
		std::cout << easyfind(my_list, 42) << std::endl;
		std::cout << easyfind(my_list, 0) << std::endl;
		std::cout << easyfind(my_list, 43) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "EASYFIND VECTOR:" << std::endl;
	try
	{
		std::cout << easyfind(my_vector, 42) << std::endl;
		int	&a = easyfind(my_vector, 42);
		a = 87;
		std::cout << easyfind(my_vector, 13) << std::endl;
		std::cout << easyfind(my_vector, -5) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "print vector modified" << std::endl;
	std::for_each(my_vector.begin(), my_vector.end(), displayInt);
	std::cout << std::endl;
	return (0);
}