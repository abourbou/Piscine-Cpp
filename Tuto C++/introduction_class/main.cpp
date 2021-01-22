/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:53:51 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/22 20:09:14 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <stdio.h>
#include <iostream>

int		main(void)
{
	//* instance is a class instance of Sample
	Sample instance;

	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.foo = 36;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();
	return 0;

}