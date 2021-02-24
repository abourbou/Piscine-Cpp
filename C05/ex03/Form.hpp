#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(void);
	Form(const Form &rhs);
	Form(std::string name, int signed_grad, int exec_grad, std::string target);
	virtual ~Form(void);
	Form &operator=(const Form &rhs);
	void be_signed(Bureaucrat official);
	virtual void	execute(Bureaucrat const &executor) const =0;
	void		is_executable(Bureaucrat const &executor) const;

	//		GETTER // SETTER

	std::string getName(void) const;
	bool getIs_signed(void) const;
	int getSigned_grad(void) const;
	int getExec_grad(void) const;
	std::string getTarget(void) const;

	//		EXCEPTION CLASS
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what(void) const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what(void) const throw()
		{
			return ("Grade too low");
		}
	};
	class	IsNotSigned	:	public std::exception
	{
		public:
			virtual const char *what(void) const throw()
			{
				return ("Form isn't signed");
			}
	};

private:
	std::string const _name;
	bool _is_signed;
	int const _signed_grad;
	int const _exec_grad;
	std::string const _target;
};
std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif