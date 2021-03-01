/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:29:58 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 21:41:17 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATOR_HPP
# define GENERATOR_HPP
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <typeinfo>
class	Base {
	public :
		virtual ~Base(void){};};
class	A : public Base{};
class	B : public Base{};
class	C : public Base{};

Base	*generator(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif