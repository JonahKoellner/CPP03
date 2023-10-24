/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:55:06 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/24 12:19:45 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src) : ClapTrap(src.name), FragTrap(src.name), ScavTrap(src.name){
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &cop) {
	this->name = cop.name;
	this->hitPoints = cop.hitPoints;
	this->energyPoints = cop.energyPoints;
	this->attackDamage = cop.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}
