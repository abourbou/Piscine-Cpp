/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:05:42 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/21 22:05:01 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

void	add_user(contact *new_contact, int index)
{
	(void)new_contact;
	(void)index;
}

int		main(void)
{
	char	buffer[512];

	int		exit;
	int		index;
	contact	contact_list[8];

	exit = 0;
	index = 0;
	std::cout << "Starting phone" << std::endl;
	while (!exit)
	{
		std::cout << "Pls put an input" << std::endl;
		std::cin >> buffer;
		if (buffer == "ADD")
		{
			if (index == 8)
				std::cout << "contact list full, can not add a new contact"
				<< std::endl;
			else
			{
				add_user(&contact_list[index], index);
				index++;
			}
		}
		else if (buffer == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
		}
		else if (buffer == "EXIT")
			exit = 1;
	}
	return (0);
}