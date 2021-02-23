#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &rhs);
		~Intern(void);
		Intern				&operator=(const Intern &rhs);
		Form	*makeForm(std::string const form, std::string const target);

	private:

};

#endif