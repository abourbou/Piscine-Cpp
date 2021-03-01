/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_conv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:05:47 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 15:50:51 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	write_char(char nbr)
{
	int		inbr = static_cast<int>(nbr);
	float	fnbr = static_cast<float>(nbr);
	double	dnbr = static_cast<double>(nbr);

	std::cout << "char: '" << nbr << "'" << std::endl;
	std::cout << "int: " << inbr << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << fnbr << "f" << std::endl;
	std::cout << "double: " << dnbr << std::endl;
}

void	write_int(int nbr)
{
	char	cnbr = static_cast<char>(nbr);
	float	fnbr = static_cast<float>(nbr);
	double	dnbr = static_cast<double>(nbr);


	std::cout << "char: ";
	if (cnbr > 31 && cnbr < 127)
		std::cout << "'" << cnbr << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << fnbr << "f" << std::endl;
	std::cout << "double: " << dnbr << std::endl;
}

void	write_float(float nbr, int prec)
{
	char	cnbr = static_cast<char>(nbr);
	int		inbr = static_cast<int>(nbr);
	double	dnbr = static_cast<double>(nbr);
	int		is_impossible = (prec == -1) ? 1 : 0;

	std::cout << "char: ";
	if (is_impossible)
		std::cout << "impossible" << std::endl;
	else
	{
		if (cnbr > 31 && cnbr < 127)
			std::cout << "'" << cnbr << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (is_impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << inbr << std::endl;
	std::cout << std::setprecision(prec) << std::fixed;
	std::cout << "float: " << nbr << "f" << std::endl;
	std::cout << "double: " << dnbr << std::endl;
}

void	write_double(double nbr, int prec)
{
	char	cnbr = static_cast<char>(nbr);
	int		inbr = static_cast<int>(nbr);
	float	fnbr = static_cast<float>(nbr);
	int		is_impossible = (prec == -1) ? 1 : 0;

	std::cout << "char: ";
	if (is_impossible)
		std::cout << "impossible" << std::endl;
	else
	{
		if (cnbr > 31 && cnbr < 127)
			std::cout << "'" << cnbr << "'" << std::endl;
		else
			std::cout << " Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (is_impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << inbr << std::endl;
	std::cout << std::setprecision(prec) << std::fixed;
	std::cout << "float: " << fnbr << "f" << std::endl;
	std::cout << "double: " << nbr << std::endl;
}
