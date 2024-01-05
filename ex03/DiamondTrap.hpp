/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:48:23 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/01/05 12:43:50 by jkollner         ###   ########.fr       */
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
