/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 09:27:57 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/21 14:25:45 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	use_all_materia(ICharacter &user, ICharacter &target)
{
	int	i = 0;
	while (i < 4)
	{
		user.use(i, target);
		i++;
	}
}

int		main(void)
{
	Ice		mat1;
	Cure	mat2;
	Character	Hero("Link");
	Character	Villain("Ganondorf");

	std::cout << "***************" << std::endl;
	std::cout << "TEST OF MATERIA" << std::endl;
	std::cout << "***************" << std::endl;
	std::cout << "xp of mat1 : " << mat1.getXP() << std::endl;
	std::cout << "xp of mat2 : " << mat1.getXP() << std::endl;
	mat1.use(Villain);
	std::cout << "xp of mat1 : " << mat1.getXP() << std::endl;
	mat2.use(Hero);

	std::cout << "***************" << std::endl;
	std::cout << "TEST OF CHARACTER" << std::endl;
	std::cout << "***************" << std::endl;
	MateriaSource	Source;
	Source.learnMateria(new Ice);
	Source.learnMateria(new Cure);
	Hero.equip(Source.createMateria("ice"));
	Hero.equip(Source.createMateria("cure"));
	Hero.equip(&mat1);
	Hero.equip(Source.createMateria("unknown fire"));
	std::cout << Hero.getName() << " is equiped!" << std::endl;
	use_all_materia(Hero, Villain);
	use_all_materia(Villain, Hero);
	Hero.unequip(2);
	std::cout << "***************" << std::endl;
	std::cout << Hero.getName() << " unequiped" << std::endl;
	std::cout << "***************" << std::endl;
	use_all_materia(Hero, Villain);
	Hero.equip(Source.createMateria("cure"));
	Hero.equip(Source.createMateria("ice"));
	std::cout << "***************" << std::endl;
	std::cout << Hero.getName() << " is equiped!" << std::endl;
	std::cout << "***************" << std::endl;
	use_all_materia(Hero, Villain);
	return (0);
}