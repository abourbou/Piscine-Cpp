/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_stream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:45:19 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/22 19:48:13 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	char	buff[512];

	std::cout << "Hello world !" << std::endl;
	std::cout << "Input a world : ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}