/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:54:24 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 17:51:33 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>

std::string		randomName(void)
{
	int				i;
	std::string const name_characters = "abcdefghijklmnopqrstuvwxyz";
	std::string		name;	

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, name_characters.size() - 1);
	std::uniform_int_distribution<> size_name(0, 10);

	i = size_name(generator);
	name += std::toupper(name_characters[distribution(generator)]);
	while (i > 0)
	{
		name += name_characters[distribution(generator)];
		i--;
	}
	return (name);
}

Zombie	*randomChump(void)
{
	std::string		name;
	Zombie			*new_zombie;
	
	name = randomName();
	new_zombie = new Zombie("random chump", name);
	new_zombie->annonce();
	return (new_zombie);
}

int	main(void)
{
	Zombie	first("quick", "Alphonse");
	
	first.annonce();
	Zombie *some = randomChump();
	delete some;

	ZombieEvent	attack("normal");
	some = attack.newZombie("Albert");
	some->annonce();
	delete some;
	attack.setZombieType("Boss");
	some = attack.newZombie("Adolph");
	some->annonce();
	delete some;
	return (0);
}