/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:39:59 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 15:22:19 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
#include <ios>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <cmath>
void	convert(char *string);

// WRITE_CONVERT
void	write_char(char nbr);
void	write_int(int nbr);
void	write_float(float nbr, int prec);
void	write_double(double nbr, int prec);
#endif