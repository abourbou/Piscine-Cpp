/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:44:34 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/02 21:05:51 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

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

#endif