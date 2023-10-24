/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:17:41 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 12:19:30 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dia("dia");
    DiamondTrap dia2(dia);
    DiamondTrap dia3("mond");

    dia.whoAmI();
    dia2.whoAmI();
    dia3 = dia;
    dia3.whoAmI();

    dia.attack( "the air" );
    dia.takeDamage( 10 );
    dia.beRepaired( 10 );
}
