/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:17:41 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 14:03:26 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap claptrap("ScavTrap");
	claptrap.attack("a random enemy");
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	claptrap.guardGate();

	std::cout << "CHECK AGAIN CAUSE IT WORKS BUT IDK IF THIS IS WHAT WAS ASKED." << std::endl;

	return 0;
}
