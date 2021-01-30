/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:44:34 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:47:08 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
	public:
		std::string	type;
		std::string	name;

		Zombie(std::string the_type, std::string the_name) : type(the_type), name(the_name)
		{}
		Zombie(void):type("default"), name("default")
		{}
		~Zombie(){}
	
		void	annonce(void) const;
};