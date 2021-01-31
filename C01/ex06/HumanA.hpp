/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:52:31 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 21:08:15 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	public:
		std::string const	name;
		HumanA(std::string const name, Weapon const &weapon);
		void	attack(void) const;
	private:
		Weapon const &_my_weapon;

};

#endif