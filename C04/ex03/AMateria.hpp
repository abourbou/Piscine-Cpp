/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:24:32 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/21 12:01:57 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	private:
		const std::string _type;
	protected:
		unsigned int _xp;
	public:
		AMateria(void);
		AMateria(const AMateria &rhs);
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &rhs);

//		GETTER/SETTER
		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif