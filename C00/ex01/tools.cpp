/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:07:06 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/24 16:10:41 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClassContact.hpp"

void		put_10_width(std::string	str)
{
	size_t const	size = str.size();
	char	copy_str[10];

	if (size > 10)
	{
		str.copy(copy_str, 10);
		std::cout.write(copy_str, 9);
		std::cout << ".";
		std::cout.flush();
	}
	else
	{
		std::cout.write("            ", 10 - size);
		std::cout << str;
		std::cout.flush();
	}
}

void		display_user(contact *contact)
{
	std::cout << contact->first_name << std::endl;
	std::cout << contact->last_name << std::endl;
	std::cout << contact->nickname << std::endl;
	std::cout << contact->login << std::endl;
	std::cout << contact->postal_address << std::endl;
	std::cout << contact->email_address << std::endl;
	std::cout << contact->phone_number << std::endl;
	std::cout << contact->birthday_date << std::endl;
	std::cout << contact->favorite_meal << std::endl;
	std::cout << contact->underwear_color << std::endl;
	std::cout << contact->darkest_secret << std::endl;
}