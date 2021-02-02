/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 21:36:33 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/02 20:53:33 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <string.h>

int		error_msg(const char *msg, int return_status)
{
	std::cerr << msg << std::endl;
	return (return_status);
}

void	replace_and_write(std::ofstream &os, std::string str, char *const s1, char *const s2)
{
	size_t		pos = 0;
	size_t		len_s1 = strlen(s1);
	size_t		len_s2 =  strlen(s2);

	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.insert(pos, s2);
		pos += len_s2;
		str.erase(pos, len_s1);
	}
	os << str;
	os.flush();
}

int		main(int argc, char **argv)
{
	std::string	buffer;
	std::string		str_buffer;
	std::ifstream	is;
	std::string		replace;

	if (argc != 4)
		return (error_msg("wrong number of arguments", 1));
	char	*const s1 = argv[2];
	char	*const s2 = argv[3];
	if (!s1[0] || !s2[0])
		return (error_msg("incorrect arguments", 1));
	replace = argv[1];
	replace += ".replace";
	is.open(argv[1], std::ios::in);
	if ((is.fail()))
		return (error_msg("open failed", 1));
	std::ofstream	os(replace.c_str());
	if ((os.fail()))
		return (error_msg("creation file failed", 1));
	while (!is.eof())
	{
		getline(is, buffer);
		replace_and_write(os, buffer.c_str(), s1, s2);
		if (!is.eof())
			os << std::endl;
	}
	return (0);
}