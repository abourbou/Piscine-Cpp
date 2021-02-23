#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("none", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs): Form(rhs.getName(), 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name): Form(name, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}


void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	is_executable(executor);
	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, 1);

	std::cout << "Pzzzzzz Pzzzzz Pzzzzzz" << std::endl;
	if (distribution(generator))
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << "Failure : " << executor.getName() << " has been lobotomized" << std::endl;
}