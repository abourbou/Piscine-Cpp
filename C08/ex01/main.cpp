/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:59:35 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/04 14:59:37 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"
# include <iostream>

int		main(void)
{
	span	tab(5);

	tab.addNumber(5);
	tab.addNumber(12);
	tab.addNumber(17);
	tab.addNumber(13);
	tab.addNumber(-11);
	span	tab2(tab);
	try
	{
		tab2.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "shortest span : " << tab.shortestSpan() << std::endl;
	std::cout << "longest span : " << tab.longestSpan() << std::endl;

	std::cout << std::endl << "TEST ADDNNUMBER " << std::endl;
	span	tab3(4);
	tab3.addnNumber(33, 3);
	tab3.addNumber(5);
	try
	{
		tab3.addNumber(15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		tab3.addnNumber(115, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "shortest span : " << tab3.shortestSpan() << std::endl;
	std::cout << "longest span : " << tab3.longestSpan() << std::endl;
	return (0);
}