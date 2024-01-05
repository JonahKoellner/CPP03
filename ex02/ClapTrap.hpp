/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:01:16 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 12:12:55 by jkollner         ###   ########.fr       */
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
		std::string getName( void );
		void setName( std::string name );
		int getHitPoints( void );
		void setHitPoints( int hitPoints );
		int getEnergyPoints( void );
		void setEnergyPoints( int energyPoints );
		int getAttackDamage( void );
		void setAttackDamage( int attackDamage );
};
