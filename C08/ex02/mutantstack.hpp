/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:12:43 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/05 10:10:35 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <algorithm>
#include <stack>

template<typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack(void){};
		MutantStack(const MutantStack &rhs){*this = rhs;};
		~MutantStack(void){};
		MutantStack	&operator=(const MutantStack &rhs){*this = rhs;};

		//stack is a wrapper of container class vector, deque and list
		typedef typename MutantStack::container_type::iterator iterator;

	// c is a protected member of the stack which point on the container
	// it is usefull to get function or private member of a container class
		iterator	begin(void){return this->c.begin();};
		iterator	end(void){return this->c.end();};
};

#endif