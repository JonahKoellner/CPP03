/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:17:41 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 12:40:51 by jkollner         ###   ########.fr       */
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
