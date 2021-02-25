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
	time_t			current_time;

	is_executable(executor);
	os.open((this->getTarget() + "_shrubbery").c_str());
	time(&current_time);
	srand(current_time % 150);

	int		nbr_shrubbery = rand()  % 4 + 2;
	int		i = 0;
	int		j;
	int		k;
	char	tree_car = '#';
	char	fond_car = '^';
	std::string	fond(19, fond_car);
	std::string	form;

	while (i < nbr_shrubbery)
	{
		int	size_tree = rand() % 7 + 3;
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