/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:25:23 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 14:31:33 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(const SuperTrap & cpy);
		SuperTrap(std::string his_name);
		SuperTrap	&operator=(const SuperTrap &cpy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};

# endif