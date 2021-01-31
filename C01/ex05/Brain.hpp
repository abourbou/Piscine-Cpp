/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 20:01:21 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 20:08:21 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class	Brain
{
	public:
		int	cells_nbr;
		std::string	identify(void) const;
		Brain(){}
		~Brain(){}
};

#endif