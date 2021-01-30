/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:37:02 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 19:16:44 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{	
	std::string	brain="HI THIS IS BRAIN";
	std::string	*pbrain = &brain;
	std::string	&rbrain = brain;

	std::cout << "string : " << brain << std::endl;
	std::cout << "pointer to the string : " << *pbrain << std::endl;
	std::cout << "reference to the string : " << rbrain << std::endl;

	return (0);
}
