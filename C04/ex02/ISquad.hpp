/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Isquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:24:56 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/19 14:22:27 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

typedef struct	s_list
{
	ISpaceMarine	*unit;
	struct s_list	*next;
}				t_list;

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine* getUnit(int nbr_unit) const = 0;
		virtual int push(ISpaceMarine* new_recruit) = 0;
};
#endif