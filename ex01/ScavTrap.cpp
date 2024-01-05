/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:15 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 12:11:51 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack ( const std::string& target ) {
	if (this->getEnergyPoints() > 0) {
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
	}
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << this->getName() << " is destructed!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	this->setName( name );
	this->setHitPoints( 100 );
	this->setEnergyPoints( 50 );
	this->setAttackDamage( 20 );
	std::cout << "ScavTrap " << this->getName() << " is constructed!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &src) : ClapTrap(src){
	*this = src;
}

ScavTrap& ScavTrap::operator=( ScavTrap &cop) {
	this->setName( cop.getName() );
	this->setHitPoints( cop.getHitPoints() );
	this->setEnergyPoints( cop.getEnergyPoints() );
	this->setAttackDamage( cop.getAttackDamage() );
	return (*this);
}
