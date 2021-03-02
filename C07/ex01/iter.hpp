/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:18:37 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 13:27:55 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *tab, int size_tab, void (*f)(T&))
{
	int	i = 0;

	while (i < size_tab)
	{
		f(tab[i]);
		i++;
	}
}

#endif