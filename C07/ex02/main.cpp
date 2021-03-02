/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:56:20 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 20:09:32 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main(void)
{
//TEST ZERO ARRAY
	Array<int>		zeroarray(0);
	std::cout << zeroarray.size() << std::endl;
	try
	{
		zeroarray[0] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


//TEST OF ARRAY
	Array< int >	iarray(5);
	std::cout << iarray.size() << std::endl;
	std::cout << iarray[2] << std::endl;
	iarray[3] = 42;
	std::cout << iarray[3] << std::endl;

	try
	{
		int	i = 0;
		iarray[i] = -87;
		std::cout << iarray[i] << std::endl;
		i = 5;
		iarray[i] = 4;
		std::cout << iarray[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Array<float>	farr(-8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	//TEST OPERATOR =
	zeroarray = iarray;
	zeroarray[3] = 3;
	iarray[3] = 78;
	std::cout << "zero : " << zeroarray[3] << " iarr : " << iarray[3] << std::endl;
	return (0);
}