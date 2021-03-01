/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:38:14 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 15:10:31 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (0);
	}
/*	float	f = std::numeric_limits<float>::infinity();
	double	d = static_cast<double>(f);
	std::cout << -1 * d << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;*/
	convert(argv[1]);
	return (0);
}