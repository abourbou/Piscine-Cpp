/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:52:31 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 21:14:22 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		std::string const	name;
		HumanB(std::string const name);
		void	setWeapon(Weapon &new_weap);
		void	attack(void) const;
	
	private:
		Weapon	*_my_weapon = 0;
};

#endif