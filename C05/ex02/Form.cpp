#include "Form.hpp"

Form::Form(void) : _name("none"), _is_signed(0), _signed_grad(150), _exec_grad(150)
{
}

Form::Form(const Form &rhs): _name(rhs._name), _is_signed(rhs._is_signed),
							_signed_grad(rhs._signed_grad), _exec_grad(rhs._exec_grad)
{
}

Form::Form(std::string name, int signed_grad, int exec_grad): _name(name), _is_signed(0),
																_signed_grad(signed_grad), _exec_grad(exec_grad)
{
	if (_signed_grad < 1 || _exec_grad < 1)
		throw(Form::GradeTooHighException());
	if (_signed_grad > 150 || _exec_grad > 150)
		throw(Form::GradeTooLowException());
}

Form::~Form(void)
{
}

Form				&Form::operator=(const Form &rhs)
{
	(void)rhs;
	return (*this);
}

void	Form::be_signed(Bureaucrat official)
{
	if (_signed_grad < official.getGrade())
		throw(GradeTooLowException());
	_is_signed = 1;
}

void	Form::is_executable(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _exec_grad)
		throw(GradeTooLowException());
	if (!_is_signed)
		throw(IsNotSigned());
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Form::getName(void) const
{
	return (_name);
}

bool				Form::getIs_signed(void) const
{
	return (_is_signed);
}

int					Form::getSigned_grad(void) const
{
	return (_signed_grad);
}

int					Form::getExec_grad(void) const
{
	return (_exec_grad);
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form " << rhs.getName() << ", signed grade required : " << rhs.getSigned_grad();
	o << ", execution grade required : " << rhs.getExec_grad() << " is ";
	if (!rhs.getIs_signed())
		o << "not ";
	o << "signed." << std::endl;
	return (o);
}