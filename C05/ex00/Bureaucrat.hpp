#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat: public std::exception
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		void	IncrementGrade(void);
		void	DecrementGrade(void);
//		GETTER // SETTER

		std::string			getName(void) const;
		int					getGrade(void) const;

	private:
		std::string			_name;
		int					_grade;
};

#endif