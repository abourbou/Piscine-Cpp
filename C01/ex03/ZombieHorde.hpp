/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:54:28 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:48:05 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieHorde

{
	public:
		Zombie			*tab_zombie;
		unsigned int	n;
		ZombieHorde(unsigned int number_zombie, std::string type);
		~ZombieHorde(void);
		void	annonce(void) const;
};