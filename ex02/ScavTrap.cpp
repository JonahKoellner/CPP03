/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:15 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 13:50:41 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack ( const std::string& target ) {
	if (this->energyPoints > 0) {
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
	}
}

void ScavTrap::takeDamage ( unsigned int amount ) {
	if (this->energyPoints > 0) {
		this->hitPoints -= amount;
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap" << this->name << " is out of energy!" << std::endl;
	}
}

void ScavTrap::beRepaired( unsigned int amount ) {
	if (this->energyPoints > 0) {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
	}
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << this->name << " is destructed!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " is constructed!" << std::endl;
}
