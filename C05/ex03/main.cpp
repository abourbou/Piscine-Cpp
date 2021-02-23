/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:00:29 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/23 16:33:13 by abourbou         ###   ########lyon.fr   */
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
	Bureaucrat	Roger("Roger", 21);

	Form *F1 = Sacha.makeForm("Presidential Pardon", "Haya");
	F1->execute(Roger);
	return (0);
}