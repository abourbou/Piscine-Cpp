/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:48:31 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/22 16:22:31 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	try
	{
		Form	F45("F45", 15, 151);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
		try
	{
		Form	F54("F45", 15, -4);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	Form		G78("G78", 35, 12);
	Bureaucrat	Agnes("Agnes", 45);
	Agnes.signForm(G78);
	std::cout << G78;
	Bureaucrat	Henry("Henry", 5);
	Henry.signForm(G78);
	std::cout << G78;
	return (0);
}