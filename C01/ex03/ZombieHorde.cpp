/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:54:10 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 10:40:11 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
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

ZombieHorde::ZombieHorde(unsigned int number_zombie, std::string type)
: n(number_zombie)
{
	unsigned int	i;

	this->tab_zombie = new Zombie[number_zombie];
	i = 0;
	while (i < number_zombie)
	{
		this->tab_zombie[i].name = randomName();
		this->tab_zombie[i].type = type;
		i++;
	}
}

void	ZombieHorde::annonce(void) const
{
	unsigned int	i;

	i = 0;
	while (i < this->n)
	{
		this->tab_zombie[i].annonce();
		i++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete []tab_zombie;
}
