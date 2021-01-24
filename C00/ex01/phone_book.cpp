/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:05:42 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/24 10:55:29 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <limits>
#include <string>
#include "ClassContact.hpp"

void	add_user(contact *new_contact, int index)
{
	int		phone_number;

	std::cout << "New contact is being added" << std::endl;

	new_contact->index = index;
	std::cout << "Enter first name : ";
	std::cin >> new_contact->first_name;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter last_name : ";
	std::cin >> new_contact->last_name;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter nickname : ";
	std::cin >> new_contact->nickname;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter login : ";
	std::cin >> new_contact->login;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter postal address (you can use space): ";
	std::getline(std::cin, new_contact->postal_address);

	std::cout << "Enter email address : ";
	std::cin >> new_contact->email_address;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter phone_number: ";
	std::cin >> new_contact->phone_number;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter birthday date : ";
	std::cin >> new_contact->birthday_date;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter favorite meal (you can use space) : ";
	std::getline(std::cin, new_contact->favorite_meal);

	std::cout << "Enter underwear color : ";
	std::cin >> new_contact->underwear_color;
	std::cin.ignore(INT64_MAX, '\n');

	std::cout << "Enter darkest secret (you can use space) : ";
	std::getline(std::cin, new_contact->darkest_secret);
	
	std::cout << "Contact validated" << std::endl << std::endl;
}
/*
void		put_10_width(char *)

void		search_user(contact contact_list[8], int index)
{
	int		i;
	size_t	size;

	i = 0;
	while (i < index)
	{
		size = contact_list[i].first_name.size;
		if (size > 10)
		{
			std::cout.write(contact_list[i].first_name, 9);
			std::cout << ".|";
		}
		else
		{

		}
	}
}*/

int		main(void)
{
	std::string	buffer;
	int			exit;
	int			index;
	contact		contact_list[8];

	exit = 0;
	index = 0;
	std::cout << "Starting phone" << std::endl;
	while (!exit)
	{
		buffer.clear();
		std::cout << "Pls put an input" << std::endl;
		std::cin >> buffer;
		if (!buffer.compare("ADD"))
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
		else if (!buffer.compare("SEARCH"))
		{
			std::cout << "SEARCH" << std::endl;
		}
		else if (!buffer.compare("EXIT"))
			exit = 1;
		else
			std::cout << "Invalid input, valid commands are ADD, SEARCH and EXIT"
			<< std::endl;
	}
	return (0);
}