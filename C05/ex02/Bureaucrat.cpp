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

void		Bureaucrat::signForm(Form &paper) const
{
	try
	{
		paper.be_signed(*this);
		std::cout << this->_name << " signs " << paper.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << this->_name << " cannot signs " << paper.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << this->_name << " can't execute " << form.getName() <<  " because " << e.what() << std::endl;
	}
	catch(const Form::IsNotSigned &e)
	{
		std::cerr << this->_name << " can't execute " << form.getName() <<  " because " << e.what() << std::endl;
	}
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