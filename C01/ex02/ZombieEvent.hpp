/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:56:26 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/27 18:48:19 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		void		setZombieType(std::string new_type);
		std::string	getZombieType(void);
		Zombie		*newZombie(std::string name);

		ZombieEvent(std::string default_type);
		~ZombieEvent(){};
	private:
		std::string	_type;
};
