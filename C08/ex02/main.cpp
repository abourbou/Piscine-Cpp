/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:36:47 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/05 10:11:41 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <exception>

int		main(void)
{
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "on top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "list of objects in the stack : ";
	while(it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::cout << "change a value : ";
	it = mstack.begin() + 1;
	*it = 42;
	it = mstack.begin();
	std::cout << "list of objects in the stack : ";
	while(it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::cout << "try to go after the end : ";
	try
	{
		++it;
		std::cout << *it << std::endl;
		std::cout << "try to go before the beginning : ";
		std::cout << *(mstack.begin()--) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// creation of a stack with a MutantStack to prove Mutant is derived from stack
	std::stack<int> s(mstack);
	std::cout << "stack : ";
	std::cout << s.top();
	s.pop();
	std::cout << " ";
	std::cout << s.top() << std::endl;
	return (0);
}