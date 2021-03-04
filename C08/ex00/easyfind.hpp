/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:29:04 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/04 10:10:32 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>

class	NotFound: public std::exception
{
	public:
		virtual const char	*what(void) const throw()
		{
			return ("Element not found");
		}
};

template<typename T>
int		&easyfind(T &cont, int value)
{
	//*typename*//
	typename T::iterator	it = std::find(cont.begin(), cont.end(), value);
	if (it == cont.end())
		throw(NotFound());
	return (*it);
}