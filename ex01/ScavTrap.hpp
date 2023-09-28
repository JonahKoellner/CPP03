/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 13:51:40 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ScavTrap( std::string name );
		~ScavTrap( void );
		void guardGate( void );
		virtual void attack ( const std::string& target );
		virtual void takeDamage ( unsigned int amount );
		virtual void beRepaired ( unsigned int amount );
};
