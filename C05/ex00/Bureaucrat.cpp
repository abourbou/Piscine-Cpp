#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):	_name("none"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name), _grade(rhs._grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

void		Bureaucrat::IncrementGrade(void)
{
	if (_grade == 1)
		throw(GradeTooHighException());
	_grade--;
}

void		Bureaucrat::DecrementGrade(void)
{
	if (_grade == 150)
		throw(GradeTooLowException());
	_grade++;
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Bureaucrat::getName(void) const
{
	return (_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}