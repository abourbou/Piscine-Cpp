/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:24:32 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/20 18:25:23 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	private:
		unsigned int _xp;
		const std::string _type;
	
	public:
		AMateria(std::string const & type);
		~AMateria(void);

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif