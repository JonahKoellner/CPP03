/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:26:30 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 11:41:52 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap();
		std::string name;
		int hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		FragTrap &operator=(FragTrap const &rhs);
		void highFivesGuys(void);
		~FragTrap();
};
