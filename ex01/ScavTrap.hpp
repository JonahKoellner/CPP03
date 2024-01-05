/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:27:13 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 12:43:39 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	private:
		ScavTrap();
	public:
		ScavTrap( std::string name );
		~ScavTrap( void );
		ScavTrap( ScavTrap &src); // copy constructor
		ScavTrap& operator=( ScavTrap &cop); // copy operator
		void guardGate( void );
		void attack ( const std::string& target );
};
