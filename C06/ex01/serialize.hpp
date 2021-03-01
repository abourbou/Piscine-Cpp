/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:18:19 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 16:53:59 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
#include <string>
#include <new>
#include <cstdlib>
#include <ctime>
#include <iostream>

struct Data {std::string s1; int n; std::string s2;};

void	*serialize(void);
Data	*deserialize(void *raw);
#endif