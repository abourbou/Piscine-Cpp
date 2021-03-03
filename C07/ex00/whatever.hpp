/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:54:35 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 12:11:44 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &first, T &second)
{
	T	buffer = first;
	first = second;
	second = buffer;
}

template <typename T>
T	min(T const &first, T const &second)
{
	return ((first < second) ? first : second);
}

template <typename T>
T	max(T const &first, T const &second)
{
	return ((first <= second) ? second : first);
}

#endif
