/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:23:35 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/21 22:08:19 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact
{
public:

	int		index;
	char	first_name[512];
	char	last_name[512];
	char	nickname[512];
	char	login[512];
	char	postal_address[512];
	char	email_address[512];
	long	phone_number;
	char	birthday_date[512];
	char	favorite_meal[512];
	char	underwear_color[512];
	char	darkest_secret[512];

	contact(void);
	~contact(void);
};


#endif