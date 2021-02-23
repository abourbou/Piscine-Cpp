#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <random>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm(std::string const name);
		~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(const RobotomyRequestForm &rhs);
		void	execute(Bureaucrat const &executor) const;

	private:
};

#endif