/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:37:27 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 20:09:16 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class	Weapon
{
	public:
		Weapon(std::string default_type);
		const std::string	&getType(void) const;
		void		setType(std::string new_type);
	private:
		std::string	_type;
};

#endif