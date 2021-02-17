/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:14:17 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 13:17:41 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <random>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string his_name);
		FragTrap(void);
		FragTrap(FragTrap const & cpy);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const & cpy);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif