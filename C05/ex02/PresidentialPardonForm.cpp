#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("none", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs): Form(rhs.getName(), 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &name): Form(name, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	is_executable(executor);
	std::cout << executor.getName() << " has been pardonned by Zafod Beeblebrox." << std::endl;
}
