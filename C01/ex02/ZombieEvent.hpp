/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:56:26 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 20:06:52 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void		setZombieType(std::string new_type);
		std::string	getZombieType(void) const;
		Zombie		*newZombie(std::string name) const;

		ZombieEvent(std::string default_type);
		~ZombieEvent(){}
	private:
		std::string	_type;
};

#endif