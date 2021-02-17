/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:14:17 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 11:42:27 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <random>

class	FragTrap
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
		FragTrap(void);
		FragTrap(FragTrap const &cpy);
		FragTrap(std::string his_name);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap const &cpy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif