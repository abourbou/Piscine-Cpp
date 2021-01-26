/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:56:26 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/26 19:00:59 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieEvent
{
	public:
		std::string	type;

		void	setZombieType(std::string changing_type);
		Zombie	*newZombie(std::string name);

		ZombieEvent(void) : type("default"){}
		~ZombieEvent(){}
		
}