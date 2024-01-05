/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:55:06 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/01/05 12:40:14 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	ClapTrap::setName( name + "_clap_name" );
	this->name = name;
	FragTrap::setHitPoints( 100 );
	ScavTrap::setEnergyPoints( 50 );
	FragTrap::setAttackDamage( 30 );
	std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src) : ClapTrap(src.name), FragTrap(src.name), ScavTrap(src.name){
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &cop) {
	this->name = cop.name;
	FragTrap::setHitPoints( cop.getHitPoints() );
	ScavTrap::setEnergyPoints( cop.getEnergyPoints() );
	FragTrap::setAttackDamage( cop.getAttackDamage() );
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}
