#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void): hit_points(100), max_hit_points(100),
					energy_points(50), level(1), name("default product"), melee_attack_dmg(20),
					range_attack_dmg(15), armor_dmg_reduction(3)
{
	std::cout << "Default constructor ScavTrap called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
	*this = cpy;
	std::cout << "Constructor by copy of ScavTrap " << cpy.name << "called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &cpy)
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
	return(*this);
}

ScavTrap::ScavTrap(std::string his_name): hit_points(100), max_hit_points(100),
					energy_points(50), level(1), name(his_name), melee_attack_dmg(20),
					range_attack_dmg(15), armor_dmg_reduction(3)
{
	std::cout << "Constructor ScavTrap " << this->name << " called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap " << this->name << " called" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target;
	std::cout << " at range, causing " << this->range_attack_dmg;
	std::cout << " points of dammage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target;
	std::cout << " at cac, causing " << this->melee_attack_dmg;
	std::cout << " points of dommage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int	dmg_taken = (amount - this->armor_dmg_reduction > 0) ? amount - this->armor_dmg_reduction : 0;

	if (this->hit_points - dmg_taken <= 0)
		dmg_taken = this->hit_points - 1;
	this->hit_points -= dmg_taken;
	std::cout << "SC4V-TP " << this->name << " takes " << dmg_taken << " damages." << " He has ";
	std::cout << this->hit_points << " left" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points + (int)amount > this->max_hit_points)
		amount = this->max_hit_points - this->hit_points;
	this->hit_points += (int)amount;
	std::cout << "SC4V-TP " << this->name << " repaires " << amount << " HP. He has ";
	std::cout << this->hit_points << " left" << std::endl;
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