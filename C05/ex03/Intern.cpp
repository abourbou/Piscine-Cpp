#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
	(void)rhs;
}

Intern::~Intern(void)
{
}

Intern				&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*CreateShrubberyCreationForm(std::string target)
{
	Form *new_form = new ShrubberyCreationForm(target);
	return (new_form);
}

Form	*CreateRobotomyRequestForm(std::string target)
{
	Form *new_form = new RobotomyRequestForm(target);
	return (new_form);
}

Form	*CreatePresidentialPardonForm(std::string target)
{
	Form *new_form = new PresidentialPardonForm(target);
	return (new_form);
}

Form	*Intern::makeForm(std::string const form, std::string const target)
{
	typedef Form *(*clone)(std::string target);
	typedef struct	s_form_book
	{
		std::string name;
		clone clone_form;
	}				t_form_book;
	t_form_book forms[3] = {	{"Shrubbery Creation", &CreateShrubberyCreationForm},
							{"Robotomy Request", &CreateRobotomyRequestForm},
							{"Presidential Pardon", &CreatePresidentialPardonForm}};
	int	i = 0;
	while (i < 3)
	{
		if (forms[i].name == form)
		{
			std::cout << "Intern create " << form << std::endl;
			return (forms[i].clone_form(target));
		}
		i++;
	}
	std::cout << "Intern couldn't create form because " << form;
	std::cout << " doesn't exist" << std::endl;
	return (0);
}