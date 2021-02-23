#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrubbery Creation Form", 145, 137, "none")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs): Form(rhs)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("Shrubbery Creation Form", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	os;

	is_executable(executor);
	os.open((this->getTarget() + "_shrubbery").c_str());

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution_nbr(2, 5);
	std::uniform_int_distribution<> distribution_width(2, 5);

	int		nbr_shrubbery = distribution_nbr(generator);
	int		i = 0;
	int		j;
	int		k;
	char	tree_car = '#';
	char	fond_car = '^';
	std::string	fond(19, fond_car);
	std::string	form;

	while (i < nbr_shrubbery)
	{
		int	size_tree = distribution_width(generator) * 2;
		j = 0;
		while (j < size_tree)
		{
			k = j;
			form = fond;
			while (k >= 0)
			{
				form[9 - k] = tree_car;
				form[9 + k] = tree_car;
				k--;
			}
			os << form << std::endl;
			j++;
		}
		j = (size_tree / 3) * 2;
		while (j > 0)
		{
			k = size_tree / 3;
			form = fond;
			while (k >= 0)
			{
				form[9 - k] = tree_car;
				form[9 + k] = tree_car;
				k--;
			}
			os << form << std::endl;
			j--;
		}
		os << std::endl << std::endl;
		i++;
	}
}