#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Presidential Pardon Form", 25, 5, "none")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs): Form(rhs)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("Presidential Pardon Form", 25, 5, target)
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
	std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox." << std::endl;
}
