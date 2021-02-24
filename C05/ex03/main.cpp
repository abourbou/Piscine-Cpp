/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:00:29 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/24 13:58:26 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int			main(void)
{
	Intern	Sacha;
	Bureaucrat	Roger("Roger", 3);

	Form *F1 = Sacha.makeForm("Robotomy Request", "Haya");
	if (F1)
	{
		std::cout << *F1;
		Roger.signForm(*F1);
		Roger.executeForm(*F1);
		std::cout << std::endl << std::endl;
	}
	delete (F1);
	F1 = Sacha.makeForm("Shrubbery Creation", "Farg");
	if (F1)
	{
		std::cout << *F1;
		Roger.signForm(*F1);
		Roger.executeForm(*F1);
		std::cout << std::endl << std::endl;
	}
	delete (F1);
	F1 = Sacha.makeForm("Presidential Pardon", "Gruh");
	if (F1)
	{
		std::cout << *F1;
		Roger.signForm(*F1);
		Roger.executeForm(*F1);
		std::cout << std::endl << std::endl;
	}
	delete (F1);
	F1 = Sacha.makeForm("Good bureaucrat creation", "Gruh");
	return (0);
}