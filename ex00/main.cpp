/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:17:41 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 13:19:11 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap("Claptrap");
	claptrap.attack("a random enemy");
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	return 0;
}
