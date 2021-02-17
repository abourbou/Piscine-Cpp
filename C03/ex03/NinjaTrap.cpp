/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:53:55 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 13:34:34 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap(60, 60, 120, 120, 1, "default product", 60, 5, 0)
{
	std::cout << "Default constructor NinjaTrap " << this->name << " called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & cpy)
{
	*this = cpy;
	std::cout << "Copy constructor NinaTrap " << cpy.name << " called" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const & cpy)
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

NinjaTrap::NinjaTrap(std::string his_name): ClapTrap(60, 60, 120, 120, 1, his_name, 60, 5, 0)
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
	std::cout << "double attack!" << std::endl; 
	partner.meleeAttack("target");
	this->meleeAttack("target");
}

void	NinjaTrap::NinjaShoebox(ScavTrap & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	std::cout << "NinjaTrap " << this->name  << " heal ScavTrap : ";
	partner.beRepaired(20); 
}

void	NinjaTrap::NinjaShoebox(NinjaTrap const & partner)
{
	if (this->energy_points < 20)
	{
		std::cout << "NinjaTrap " << this->name << ": Not enought energy to execute attack" << std::endl;
		return ;
	}
	if (this == &partner)
	{
		std::cout << "NinjaTrap " << this->name << ": you need to find a friend!" << std::endl;
		return ;
	}
	this->energy_points -= 20;
	std::cout << "NinjaTraps launch a duo mortal attack" << std::endl;
	this->meleeAttack("target");
	partner.meleeAttack("target");
	this->meleeAttack("target");
	partner.meleeAttack("target");
}