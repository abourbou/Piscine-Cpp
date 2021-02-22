/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:15:10 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/22 14:32:31 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	Elizabeth("Elizabeth", 25);
	Bureaucrat	Franck("Franck", 80);
	std::cout << Elizabeth << std::endl;
	std::cout << Franck << std::endl;

	Bureaucrat	Boss("Macron", 1);
	Bureaucrat	Lackey("Lackey", 150);
	try
	{
		Boss.IncrementGrade();
		std::cout << Boss << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << Boss.getName() << " : " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << Boss.getName() << " : " << e.what() << std::endl;
	}
	try
	{
		Lackey.DecrementGrade();
		std::cout << Lackey << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << Lackey.getName() << " : " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << Lackey.getName() << " : " << e.what() << std::endl;
	}
	return (0);
}
