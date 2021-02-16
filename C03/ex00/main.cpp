/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:22:39 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 10:36:32 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	Robot("Jean-Jacques");

	Robot.meleeAttack("Charles");
	Robot.rangedAttack("Charles-Henry");

	Robot.takeDamage(20);
	Robot.takeDamage(1000);
	Robot.takeDamage(1000);

	Robot.beRepaired(30);
	Robot.beRepaired(150);
	Robot.beRepaired(150);

	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
}