/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:08:53 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 10:52:38 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &src ) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
}

ClapTrap& ClapTrap::operator=( ClapTrap &cop ) {
	this->name = cop.name;
	this->hitPoints = cop.hitPoints;
	this->energyPoints = cop.energyPoints;
	this->attackDamage = cop.attackDamage;
	return (*this);
}

void ClapTrap::attack ( const std::string& target ) {
	if (this->energyPoints > 0) {
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
	}
}

void ClapTrap::takeDamage ( unsigned int amount ) {
	if (this->energyPoints > 0) {
		this->hitPoints -= amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap" << this->name << " is out of energy!" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->energyPoints > 0) {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
	}
}
