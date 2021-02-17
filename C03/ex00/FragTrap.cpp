/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:14:19 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 11:54:02 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): hit_points(100), max_hit_points(100),
					energy_points(100), level(1), name("default product"), melee_attack_dmg(30),
					range_attack_dmg(20), armor_dmg_reduction(5)
{
	std::cout << "Default constructor FragTrap called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
	*this = cpy;
	std::cout << "creation copy of FragTrap " << cpy.name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &cpy)
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

FragTrap::FragTrap(std::string his_name): hit_points(100), max_hit_points(100),
					energy_points(100), level(1), name(his_name), melee_attack_dmg(30),
					range_attack_dmg(20), armor_dmg_reduction(5)
{
	std::cout << "Constructor FragTrap " << this->name << " called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap " << this->name << " called" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target;
	std::cout << " at range, causing " << this->range_attack_dmg;
	std::cout << " points of dammage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target;
	std::cout << " at cac, causing " << this->melee_attack_dmg;
	std::cout << " points of dommage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int	dmg_taken = (amount - this->armor_dmg_reduction > 0) ? amount - this->armor_dmg_reduction : 0;

	if (this->hit_points - dmg_taken <= 0)
		dmg_taken = this->hit_points - 1;
	this->hit_points -= dmg_taken;
	std::cout << "FR4G-TP " << this->name << " takes " << dmg_taken << " damages." << " He has ";
	std::cout << this->hit_points << " left" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points + (int)amount > this->max_hit_points)
		amount = this->max_hit_points - this->hit_points;
	this->hit_points += (int)amount;
	std::cout << "FR4G-TP " << this->name << " repaires " << amount << " HP. He has ";
	std::cout << this->hit_points << " left" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int	randomNumber;

	if (this->energy_points < 25)
	{
		std::cout << "Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 25;
	//random generation
	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(1, 5);
	randomNumber = distribution(generator);

	std::cout << "FR4G-TP " << this->name << " execute ";
	if (randomNumber == 1)
		std::cout << "scythe attack, causing 60 dmg to " << target << " and all ennemies in the area." << std::endl;
	if (randomNumber == 2)
		std::cout << "hochet clown, causing 40 dmg and stun " << target << "." << std::endl;
	if (randomNumber == 3)
		std::cout << "rifle attack, causing 70 dmg at a long range to " << target << "." << std::endl;
	if (randomNumber == 4)
		std::cout << "sword attack, causing 50 dmg at cac of " << target << "." << std::endl;
	if (randomNumber == 5)
		std::cout << "deadly attack, causing 150 dmg to " << target << "." << std::endl;
}