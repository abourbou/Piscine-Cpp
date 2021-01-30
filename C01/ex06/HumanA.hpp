/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:52:31 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 22:01:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	public:
		std::string const	name;
		Weapon				&my_weapon;
		HumanA(std::string const name, Weapon starting_weapon);
		void	attack(void) const;
};