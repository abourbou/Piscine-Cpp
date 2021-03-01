/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:41:49 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/01 15:34:24 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	non_digit(char *c_str)
{
	std::string	str(c_str);

	if (str.length() == 1)
		write_char(c_str[0]);
	else if (!str.compare("nan"))
		write_double(std::numeric_limits<double>::quiet_NaN(), -1);
	else if (!str.compare("nanf"))
		write_float(std::numeric_limits<float>::quiet_NaN(), -1);
	else if (!str.compare("-inf"))
		write_double(-1 * std::numeric_limits<double>::infinity(), -1);
	else if (!str.compare("-inff"))
		write_float(-1 * std::numeric_limits<float>::infinity(), -1);
	else if (!str.compare("inf") || !str.compare("+inf"))
		write_double(std::numeric_limits<double>::infinity(), -1);
	else if (!str.compare("inff") || !str.compare("+inff"))
		write_float(std::numeric_limits<float>::infinity(), -1);
	else
		std::cout << "Invalid string" << std::endl;
}

int		precision_str(char *string)
{

	int		i = 0;
	int		precision = 0;

	while (string[i] && string[i] != '.')
		i++;
	if (string[i])
		i++;
	while (string[i] && string[i] != 'f')
	{
		precision++;
		i++;
	}
	if (!precision)
		precision = 1;
	return (precision);
}

void	convert(char *cstr)
{
	std::string	str(cstr);

	if (!cstr)
		return ;
	if (!isdigit(cstr[0]) || (str.length() > 1 && cstr[0] == '-'
		&&!isdigit(cstr[1])))
	{
		non_digit(cstr);
		return ;
	}
	else if (str[str.length() - 1] == 'f')
		write_float(static_cast<float>(atof(cstr)), precision_str(cstr));
	else if (str.find('.') != std::string::npos)
		write_double(atof(cstr), precision_str(cstr));
	else
		write_int(atoi(cstr));
}