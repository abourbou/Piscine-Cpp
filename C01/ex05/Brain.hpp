/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 20:01:21 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:08:24 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Brain
{
	public:
		int	cells_nbr;
		std::string	identify(void) const;
		Brain(){}
		~Brain(){}
};