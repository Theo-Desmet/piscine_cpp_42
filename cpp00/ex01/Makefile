# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 08:53:24 by tdesmet           #+#    #+#              #
#    Updated: 2022/10/21 13:54:38 by tdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS =  -std=c++98 -Wall -Werror -Wextra

FILES = Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(FILES:.cpp=.o)

NAME = PhoneBook

%.o: %.cpp
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
