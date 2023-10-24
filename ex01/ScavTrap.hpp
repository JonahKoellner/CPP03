/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 12:22:43 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	private:
		ScavTrap();
		//std::string name;
		//int hitPoints;
		//int energyPoints;
		//int attackDamage;
	public:
		ScavTrap( std::string name );
		~ScavTrap( void );
		//ScavTrap( ScavTrap &src); // copy constructor
		//ScavTrap& operator=( ScavTrap &cop); // copy operator
		void guardGate( void );
		void attack ( const std::string& target );
};
