/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:46:26 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 10:56:47 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include <string>
# include <iostream>
# include <random>

class	ScavTrap
{
	private:
		int	hit_points;
		int	max_hit_points;
		int	energy_points;
		int	max_energy_points;
		int	level;
		std::string	name;
		int	melee_attack_dmg;
		int	range_attack_dmg;
		int	armor_dmg_reduction;

	public:
		ScavTrap(std::string his_name);
		~ScavTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewComer(std::string const &target);
};
#endif