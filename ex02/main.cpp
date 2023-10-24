/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:17:41 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 11:41:47 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap fragtrap("FragTrap");
	fragtrap.attack("a random enemy");
	fragtrap.takeDamage(2);
	fragtrap.beRepaired(2);
	fragtrap.highFivesGuys();

	return 0;
}
