/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:37:32 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 15:06:16 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap()
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_dmg = 60;
	this->range_attack_dmg = 20;
	this->armor_dmg_reduction = 20;

	std::cout << "Default constructor SuperTrap called" << std::endl;
	(void)this->max_energy_points;
	(void)this->level; 
}

SuperTrap::SuperTrap(const SuperTrap & cpy)
{
	*this = cpy;
	std::cout << "Constructor by copy called" << std::endl;
}

SuperTrap::SuperTrap(std::string his_name): ClapTrap(his_name)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_dmg = 60;
	this->range_attack_dmg = 20;
	this->armor_dmg_reduction = 20;

	std::cout << "Default constructor SuperTrap called" << std::endl;
	(void)this->max_energy_points;
	(void)this->level; 
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &cpy)
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

void	SuperTrap::rangedAttack(std::string const & target)
{
	this->FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	this->NinjaTrap::meleeAttack(target);
}