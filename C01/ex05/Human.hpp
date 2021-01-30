/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 20:58:50 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/30 21:12:46 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class	Human
{
	public:
		Brain const	&getBrain(void);
		std::string	identify(void) const;

	private:
		Brain const _my_brain;

};