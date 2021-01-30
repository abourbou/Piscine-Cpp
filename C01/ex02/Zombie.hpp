/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:44:34 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:45:29 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
	public:
		std::string const	type;
		std::string	const	name;

		Zombie(std::string const the_type, std::string const the_name) : type(the_type), name(the_name)
		{}
		~Zombie(){}
	
		void	annonce(void) const;
};