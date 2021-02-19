/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:04:06 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/19 12:57:21 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int		main(void)
{
	Character* moi = new Character("Hero");
	Enemy* scorp1 = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(scorp1);
	std::cout << *moi;
	moi->equip(pr);
	moi->attack(scorp1);
	std::cout << *moi;
	moi->attack(scorp1);
	std::cout << *moi;

	std::cout << std::endl << "The boss appeared" << std::endl;
	Enemy* boss = new SuperMutant();
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(boss);
	moi->attack(boss);
	moi->attack(boss);
	moi->attack(boss);
	moi->recoverAP();
	moi->recoverAP();
	std::cout << *moi;
	moi->attack(boss);
	moi->attack(boss);
	std::cout << "Victory!" << std::endl;
	return 0;
}