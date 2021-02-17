/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:46:26 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 13:26:02 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include <string>
# include <iostream>
# include <random>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{

	public:
		ScavTrap(std::string his_name);
		ScavTrap(void);
		ScavTrap(ScavTrap const & cpy);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const & cpy);
		void	challengeNewComer(std::string const &target);
};
#endif