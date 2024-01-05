/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:30:36 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/01/05 12:28:09 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setName( name );
	this->setHitPoints( 100 );
	this->setEnergyPoints( 100 );
	this->setAttackDamage( 30 );
	std::cout << "FragTrap " << name << " constructed" << std::endl;

}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src) {
	*this = src;
}

FragTrap &FragTrap::operator=(ClapTrap &rhs) {
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " requests a high five!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is destructed!" << std::endl;
}
