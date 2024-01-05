/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:26:30 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 12:43:41 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		FragTrap &operator=(ClapTrap &rhs);
		void highFivesGuys(void);
		~FragTrap();
};
