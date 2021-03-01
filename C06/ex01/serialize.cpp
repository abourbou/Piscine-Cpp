/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:18:41 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 20:17:42 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int		create_random_int(void)
{
	return (rand());
}

char	create_random_char(void)
{
	int	nbr = rand() % (26 + 10 + 26);
	if (nbr < 26)
		return ('A' + nbr);
	if (nbr < 36)
		return ('0' + nbr - 26);
	return ('a' + nbr - 36);
}

void	*serialize(void)
{
	//create pseudo-randomness
	time_t	current_time_s;
	time(&current_time_s);
	srand(current_time_s);

	//heap allocated
	std::size_t	size = 2 * (sizeof(char) * 8) + sizeof(int);
	void	*memory = new char[size];
	//printf("pointer memory : %p\n", memory);

	//modify first string
	char	*s1 = reinterpret_cast<char *>(memory);
	//printf("pointer s1 : %p\n", s1);
	int	i = 0;
	while (i < 8)
	{
		s1[i] = create_random_char();
		std::cout << s1[i];
		i++;
	}

	//modify number
	int		*nbr = reinterpret_cast<int*>(s1 + 8); // equiv &s1[8]
	//printf("pointer nbr : %p\n", nbr);
	*nbr = create_random_int();
	std::cout << " [" << *nbr << "] ";
	std::cout.flush();

	//modify last string
	char	*s2 = reinterpret_cast<char *>(nbr + 1); //equiv &nbr[1]
	//printf("pointer s2 : %p\n", s2);
	i = 0;
	while (i < 8)
	{
		s2[i] = create_random_char();
		std::cout << s2[i];
		i++;
	}
	std::cout << std::endl;
	return (memory);
}