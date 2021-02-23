#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm			&operator=(const PresidentialPardonForm &rhs);

		void	execute(Bureaucrat const &executor) const;
	private:
};

#endif