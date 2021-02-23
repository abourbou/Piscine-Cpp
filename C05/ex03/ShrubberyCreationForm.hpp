#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
#include <fstream>
#include <random>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(const ShrubberyCreationForm &rhs);
		void	execute(Bureaucrat const &executor) const;

	private:
};

#endif