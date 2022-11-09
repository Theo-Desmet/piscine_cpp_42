# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 08:53:24 by tdesmet           #+#    #+#              #
#    Updated: 2022/11/09 08:29:03 by tdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -std=c++98 -Wall -Werror -Wextra

FILES = main.cpp Harl.cpp

OBJS = $(FILES:.cpp=.o)

NAME = harl2.0

%.o: %.c
	@printf "\033[0;33mCompiling camarade: %-33.33s\r" $@
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS) -o  $(NAME)

all: $(NAME)

clean:
	@ rm -f $(OBJS)
	@ printf '\033[0;32mclean done\033[0m\n'

fclean: clean
	@ rm -f $(NAME)
	@ printf '\033[0;32mfclean done\033[0m\n'

re: fclean all

.PHONY: all clean fclean re
