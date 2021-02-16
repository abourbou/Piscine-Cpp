/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:14:19 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 13:52:14 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string his_name): ClapTrap(100, 100, 100, 100, 1, his_name,
											30, 20, 5)
{
	std::cout << "Constructor FragTrap " << this->name << " called" << std::endl;
	(void)this->max_energy_points;
	(void)this->level;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap " << this->name << " called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int	randomNumber;

	if (this->energy_points < 25)
	{
		std::cout << "FR4G-TP " << this->name << ": Not enought energy to execute attack" << std::endl;
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