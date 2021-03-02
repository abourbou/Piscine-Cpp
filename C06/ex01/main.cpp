/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:16:58 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 11:52:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int		main(void)
{
	void	*memory = serialize();
	Data	*data = deserialize(memory);
	std::cout << data->s1 << " [" << data->n << "] ";
	std::cout.flush();
	std::cout << data->s2 << std::endl;
	delete memory;
	delete data;
	return (0);
}