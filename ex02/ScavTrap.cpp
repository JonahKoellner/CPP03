/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:15 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 11:06:13 by jonahkollne      ###   ########.fr       */
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

ScavTrap::ScavTrap( ScavTrap &src) : ClapTrap(src){
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
}

ScavTrap& ScavTrap::operator=( ScavTrap &cop) {
	this->name = cop.name;
	this->hitPoints = cop.hitPoints;
	this->energyPoints = cop.energyPoints;
	this->attackDamage = cop.attackDamage;
	return (*this);
}
