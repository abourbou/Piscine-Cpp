#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
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
