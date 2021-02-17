/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:14:05 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 13:22:36 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hit_points(100), max_hit_points(100),
						   energy_points(100), level(1), name("default product"), melee_attack_dmg(25),
						   range_attack_dmg(25), armor_dmg_reduction(4)
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	*this = cpy;
	std::cout << "creation copy of ClapTrap " << cpy.name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &cpy)
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

ClapTrap::ClapTrap(int hp, int max_hp, int nrg_p, int max_nrg_p, int lvl,
				   std::string his_name, int melee, int range, int arm) : hit_points(hp), max_hit_points(max_hp), energy_points(nrg_p),
																		  max_energy_points(max_nrg_p), level(lvl), name(his_name),
																		  melee_attack_dmg(melee), range_attack_dmg(range), armor_dmg_reduction(arm)
{
	std::cout << "Constructor ClapTrap " << this->name << " called" << std::endl;
	(void)max_energy_points;
	(void)level;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap " << this->name << " called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target;
	std::cout << " at range, causing " << this->range_attack_dmg;
	std::cout << " points of dammage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target;
	std::cout << " at cac, causing " << this->melee_attack_dmg;
	std::cout << " points of dommage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int dmg_taken = (amount - this->armor_dmg_reduction > 0) ? amount - this->armor_dmg_reduction : 0;

	if (this->hit_points - dmg_taken <= 0)
		dmg_taken = this->hit_points - 1;
	this->hit_points -= dmg_taken;
	std::cout << "CL4P-TP " << this->name << " takes " << dmg_taken << " damages."
			  << " He has ";
	std::cout << this->hit_points << " left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points + (int)amount > this->max_hit_points)
		amount = this->max_hit_points - this->hit_points;
	this->hit_points += (int)amount;
	std::cout << "CL4P-TP " << this->name << " repaires " << amount << " HP. He has ";
	std::cout << this->hit_points << " left" << std::endl;
}