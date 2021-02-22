#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	Form;
//std::ostream &operator<<(std::ostream &o, Form const &rhs);

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &rhs);
		void	IncrementGrade(void);
		void	DecrementGrade(void);
		void	signForm(Form &paper) const;

//		GETTER // SETTER
		std::string			getName(void) const;
		int					getGrade(void) const;

//		EXCEPTION CLASS
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Grade too high");
				}
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Grade too low");
				}
		};

	private:
		std::string const	_name;
		int					_grade;
};
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);


#endif