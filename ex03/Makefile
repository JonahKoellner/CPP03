# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 13:05:24 by jkollner          #+#    #+#              #
#    Updated: 2023/10/24 12:15:06 by jonahkollne      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = DiamondTrap
cc = c++
cflags = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98
src = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

%.o: %.cpp
	$(cc) $(cflags) $< -c -o $@

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all re clean fclean
