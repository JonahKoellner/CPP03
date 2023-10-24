/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:48:23 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/24 12:19:48 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &src);
		DiamondTrap &operator=(DiamondTrap &cop);
		using ScavTrap::attack;
		void whoAmI(void);
		~DiamondTrap();
};
