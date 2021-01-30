/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:02:01 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:13:01 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain const	&Human::getBrain(void)
{
	Brain const	&ref_brain = this->_my_brain;
	
	return (ref_brain);
}

std::string	Human::identify(void) const
{
	return (this->_my_brain.identify());
}