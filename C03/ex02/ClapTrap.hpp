/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:14:09 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 11:40:52 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	protected:
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
		ClapTrap(int hp, int max_hp, int nrg_p, int max_nrg_p, int lvl,
				 std::string his_name, int melee, int range, int arm);
		~ClapTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif