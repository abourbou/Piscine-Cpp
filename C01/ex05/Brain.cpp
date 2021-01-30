/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:19:09 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:08:30 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

std::string	Brain::identify(void) const
{
	std::stringstream stream_convert;
	std::string str;
	long	adress = (long)this;

	stream_convert << std::hex << adress;
	str = "0x";
	str += stream_convert.str();
	return (str);
}