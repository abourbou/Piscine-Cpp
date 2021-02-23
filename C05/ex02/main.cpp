/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:07:49 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/23 11:39:56 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	Jack("Jack", 5);
	ShrubberyCreationForm	F12("Ivern");
	RobotomyRequestForm		R87("Alex Murphy");
	PresidentialPardonForm	P47("Margaret Mitchell");

	try
	{
		Jack.signForm(F12);
		F12.execute(Jack);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jack.signForm(R87);
		R87.execute(Jack);
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jack.signForm(P47);
		Jack.executeForm(P47);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat	Roberta("Roberta", 56);
	Roberta.executeForm(F12);
	Roberta.executeForm(R87);
	return (0);
}