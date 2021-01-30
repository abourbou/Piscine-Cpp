/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 20:35:22 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:19:18 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Brain	lab_brain;
	Human	bob;
	std::string	address;

	std::cout << "Brain alone :" << std:: endl;
	address = lab_brain.identify();
	std::cout << &lab_brain << std::endl;
	std::cout << address << std::endl << std::endl;

	std::cout << "Human : " << std::endl;
	std::cout << &bob.getBrain() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	std::cout << bob.identify() << std::endl;
	return (0);
}