#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Robotomy Request Form", 72, 45, "none")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs): Form(rhs)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("Robotomy Request Form", 72, 45, target)
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
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Failure : " << this->getTarget() << " has been lobotomized" << std::endl;
}