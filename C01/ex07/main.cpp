/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 21:36:33 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/02 12:18:49 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int		error_msg(const char *msg, int return_status)
{
	std::cerr << msg << std::endl;
	return (return_status);
}

int		main(int argc, char **argv)
{
	char	buffer[100];
	std::ifstream	is;
	std::string		replace;

	if (argc != 4)
		return (error_msg("wrong number of arguments", 1));
	char	*const s1 = argv[2];
	char	*const s2 = argv[3];
	replace = argv[1];
	replace += ".replace";
	is.open(argv[1], std::ios::in);
	if ((is.fail()))
		return (error_msg("open failed", 1));
	std::ofstream	os(replace.c_str());
	if ((os.fail()))
		return (error_msg("creation file failed", 1));
	/*while (1)
	{
		is.getline(buffer, 100);
		if (is.fail())
			return (error_msg("read failed", 1));

	}*/
	return (0);
}