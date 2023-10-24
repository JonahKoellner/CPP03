/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:30:36 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/24 11:45:48 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed" << std::endl;

}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src) {
	*this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " is destructed!" << std::endl;
}
