# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 08:53:24 by tdesmet           #+#    #+#              #
#    Updated: 2022/11/14 08:48:50 by tdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(FILES:.cpp=.o)

NAME = weapon

%.o: %.cpp
	@printf "\033[0;33mCompiling camarade: %-33.33s\r" $@
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o  $(NAME)

all: $(NAME)

clean:
	@ rm -f $(OBJS)
	@ printf '\033[0;32mclean done\033[0m\n'

fclean: clean
	@ rm -f $(NAME)
	@ printf '\033[0;32mfclean done\033[0m\n'

re: fclean
	make all

.PHONY: all clean fclean re
