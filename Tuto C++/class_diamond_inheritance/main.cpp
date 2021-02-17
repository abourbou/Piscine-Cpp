/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:48:05 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 11:34:32 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

int		main(void)
{
	A	A1;
	std::cout << std::endl;
	A	A2(31);
	std::cout << std::endl;
	B	B1(15);
	std::cout << std::endl;
	C	C1(141);
	std::cout << std::endl;
	D	D1(9, 47, 63);
	std::cout << std::endl;
	std::cout << D1.get_x() << std::endl;

	A	A3(B1);
	std::cout << std::endl;
}