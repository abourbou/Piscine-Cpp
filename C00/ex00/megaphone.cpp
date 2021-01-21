/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:59:36 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/20 18:06:09 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= 'a' && argv[i][j] <= 'z'))
				argv[i][j] -= 32;
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
	{
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}