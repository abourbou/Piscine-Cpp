/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:53:55 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 15:15:29 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string &his_name): ClapTrap(60, 60, 120, 120, 1, his_name, 60, 5, 0)
{
	std::cout << "Constructor NinjaTrap " << this->name << " called" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor NinjaTrap " << this->name << " called" << std::endl;
}

void	NinjaTrap::NinjaShoebox(ClapTrap & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	std::cout << "NinjaTrap " << this->name << " use the ClapTrap as protection: ";
	partner.takeDamage(20);
}

void	NinjaTrap::NinjaShoebox(FragTrap const & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	partner.melee_attack_dmg("target");
	
}

void	NinjaTrap::NinjaShoebox(ScavTrap const & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	std::cout << "NinjaTrap " << this->name << " Launch the ClapTrap on the ennemi" << std::endl;
}

void	NinjaTrap::NinjaShoebox(NinjaTrap const & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	std::cout << "NinjaTrap " << this->name << " Launch the ClapTrap on the ennemi" << std::endl;
}