/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:56:20 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 16:12:27 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main(void)
{
	Array< int >	iarray(5);

	std::cout << iarray.size() << std::endl;
	std::cout << iarray[2] << std::endl;

	return (0);
}