/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:01:16 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 10:53:00 by jkollner         ###   ########.fr       */
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
		ClapTrap( ClapTrap &src ); // copy constructor
		ClapTrap& operator=( ClapTrap &cop ); // copy operator
		~ClapTrap( void );
		void attack ( const std::string& target );
		void takeDamage ( unsigned int amount );
		void beRepaired ( unsigned int amount );
};
