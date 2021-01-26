/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:38:34 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/26 17:58:20 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{	

public:
	int	nbr_human_kill;
	int	actually_a_licorn;
	std::string const color;

	Pony(int kill, std::string const b) : nbr_human_kill(kill), actually_a_licorn(nbr_human_kill > 1000), color(b)
	{}

	~Pony(void){}

	void	MURDER();
};


#endif