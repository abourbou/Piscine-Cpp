/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:05:25 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 20:18:22 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data	*deserialize(void *raw)
{
	Data	*data = new Data;
	//printf("pointer to s1 : %p\n", reinterpret_cast<char *>(raw));
	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = *(reinterpret_cast<int*>(raw) + 2);
	//printf("pointer to n : %p\n", reinterpret_cast<int *>(raw) + 2);
	data->s2 = std::string(reinterpret_cast<char *>(raw) + sizeof(int) + sizeof(char) * 8, 8);
	//printf("pointer to s2 : %p\n", reinterpret_cast<char *>(raw) + sizeof(int) + 8 *sizeof(char));
	return (data);
}