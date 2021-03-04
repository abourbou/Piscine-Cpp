/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:12:43 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/04 16:48:20 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <algorithm>
#include <stack>

template<typename T>
class	mutantstack: public stack<T>
{
	public:
		mutantstack(void);
		mutantstack(void);
		~mutantstack(void);
		mutantstack	&operator=(const mutantstack &rhs);

	//ITERATOR
		class	iterator
		{
			public:
				iterator	&operator++(void);
				iterator	operator++(int i);
				iterator	&operator--(void);
				iterator	operator--(int i);
				iterator
				mutantstack
			
			private:
				mutantstack	*_ptr;
		};
		iterator	&begin(void);
		iterator	&end(void);
}

#endif