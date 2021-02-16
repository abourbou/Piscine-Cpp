/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:14:05 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 17:46:58 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hp, int max_hp, int nrg_p, int max_nrg_p, int lvl,
				 std::string his_name, int melee, int range, int arm) :
				 hit_points(hp), max_hit_points(max_hp), energy_points(nrg_p),
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

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target;
	std::cout << " at range, causing " << this->range_attack_dmg;
	std::cout << " points of dammage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target;
	std::cout << " at cac, causing " << this->melee_attack_dmg;
	std::cout << " points of dommage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	dmg_taken = (amount - this->armor_dmg_reduction > 0) ? amount - this->armor_dmg_reduction : 0;

	if (this->hit_points - dmg_taken <= 0)
		dmg_taken = this->hit_points - 1;
	this->hit_points -= dmg_taken;
	std::cout << "CL4P-TP " << this->name << " takes " << dmg_taken << " damages." << " He has ";
	std::cout << this->hit_points << " left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points + (int)amount > this->max_hit_points)
		amount = this->max_hit_points - this->hit_points;
	this->hit_points += (int)amount;
	std::cout << "CL4P-TP " << this->name << " repaires " << amount << " HP. He has ";
	std::cout << this->hit_points << " left" << std::endl;
}