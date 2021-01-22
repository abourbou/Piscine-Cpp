/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:50:45 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/22 20:30:21 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 : " << this->a1 << std::endl;
	std::cout << "this->a2 : " << this->a2 << std::endl;
	std::cout << "this->a3 : " << this->a3 << std::endl;

	return;
}

Sample::~Sample (void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
