#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(100, 100, 50, 50, 1, "default product",
											20, 15, 3)
{
	std::cout << "Default constructor ScavTrap " << this->name << " called" << std::endl;
	(void)this->max_energy_points;
	(void)this->level;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	*this = cpy;
	std::cout << "creation copy of ScavTrap " << cpy.name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & cpy)
{
	this->hit_points = cpy.hit_points;
	this->max_hit_points = cpy.max_hit_points;
	this->energy_points = cpy.energy_points;
	this->max_energy_points = cpy.max_energy_points;
	this->level = cpy.level;
	this->name = cpy.name;
	this->melee_attack_dmg = cpy.melee_attack_dmg;
	this->range_attack_dmg = cpy.range_attack_dmg;
	this->armor_dmg_reduction = cpy.armor_dmg_reduction;
	return (*this);
}

ScavTrap::ScavTrap(std::string his_name): ClapTrap(100, 100, 50, 50, 1, his_name,
											20, 15, 3)
{
	std::cout << "Constructor ScavTrap " << this->name << " called" << std::endl;
	(void)this->max_energy_points;
	(void)this->level;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap " << this->name << " called" << std::endl;
}

void	ScavTrap::challengeNewComer(std::string const &target)
{
	int	randomNumber;

	if (this->energy_points < 25)
	{
		std::cout << "SC4V-TP " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 25;
	//random generation
	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(1, 3);
	randomNumber = distribution(generator);

	std::cout << "SC4V-TP " << this->name << " challenge " << target << " with ";
	if (randomNumber == 1)
		std::cout << "a chifoumi battle!" << std::endl;
	if (randomNumber == 2)
		std::cout << "a death match" << std::endl;
	if (randomNumber == 3)
		std::cout << "an atletism contest" << std::endl;
}