/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:40:52 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/19 13:44:49 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP
class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone(void) const = 0;
		virtual void battleCry(void) const = 0;
		virtual void rangedAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;
};
#endif