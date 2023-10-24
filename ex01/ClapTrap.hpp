/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:01:16 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/24 11:02:18 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap &src); // copy constructor
		ClapTrap& operator=( ClapTrap &cop); // copy operator
		void attack ( const std::string& target );
		void takeDamage ( unsigned int amount );
		void beRepaired ( unsigned int amount );
};
