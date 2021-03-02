/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:19:46 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 13:37:26 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	show_type(T &c)
{
	std::cout << c << ' ';
}
template <typename T>
void	type_plus(T &c)
{
	c++;
}

int		main(void)
{
	//tab of char
	char	ctab[8] = {'m', 'a', 'd', 'e', 'i', 'n', 'a', 'b'};
	iter<char>(ctab, 5, show_type<char>);
	std::cout << std::endl;
	iter<char>(ctab, 5, type_plus<char>);
	iter<char>(ctab, 8, show_type<char>);
	std::cout << std::endl;
	//tab of int
	int		itab[4] = {42, 15, -64, 0};
	iter<int>(itab, 4, show_type<int>);
	std::cout << std::endl;
	iter<int>(itab, 4, type_plus<int>);
	iter<int>(itab, 4, show_type<int>);
	return (0);
}