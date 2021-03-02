/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:56:52 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 12:13:45 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int		main(void)
{

	//substitution
	int		a = 42;
	int		b = 78;
	swap<int>(a,b);
	std::cout << "a : " << a << " b : " << b << std::endl;

	float		c = 42.05;
	float		d = 78.5444;
	swap<float>(c,d);
	std::cout << "c : " << c << " d : " << d << std::endl;
	std::cout << std::endl;

	//min
	std::cout << min<int> (42, 15) << std::endl;
	std::cout << min<float> (42, 15) << std::endl;
	std::cout << min<std::string> ("ca", "et la") << std::endl;
	std::cout << std::endl;

	//max
	std::cout << max<int> (42, 15) << std::endl;
	std::cout << max<float> (42, 15) << std::endl;
	std::cout << max<std::string> ("ca", "et la") << std::endl;
	return (0);
}