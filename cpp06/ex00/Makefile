# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 08:53:24 by tdesmet           #+#    #+#              #
#    Updated: 2022/12/02 16:05:38 by tdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

white = \033[1;37m
reset = \033[1;0m

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

FILES = main.cpp\

OBJS = $(FILES:.cpp=.o)

NAME = cast

%.o: %.cpp
	@ printf "\033[0;33mCompiling camarade: %-33.33s\r" $@
	@ $(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o  $(NAME)

all: $(NAME)

int:
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 0
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 42
	@ echo "$(white)\n******************************\n$(reset)"
	./cast +42
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 2147483647
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 2147483648
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -2147483648
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -2147483649
	@ echo "$(white)\n******************************\n$(reset)"

char:
	@ echo "$(white)\n******************************\n$(reset)"
	./cast a
	@ echo "$(white)\n******************************\n$(reset)"
	./cast '\n'
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 42
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 127
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 128

float:
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.0f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.1f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 0.1f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast .1f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast .f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -.f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast +.f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast +inff
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -inff
	@ echo "$(white)\n******************************\n$(reset)"
	./cast nanf
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 340282346638528859811704183484516925440.000000f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 340283346638528859811704183484516925440.000000f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -340282346638528859811704183484516925440.000000f
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -340283346638528859811704183484516925440.000000f

double:
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.0
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 1.1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 0.1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast .1
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -.
	@ echo "$(white)\n******************************\n$(reset)"
	./cast +.
	@ echo "$(white)\n******************************\n$(reset)"
	./cast +inf
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -inf
	@ echo "$(white)\n******************************\n$(reset)"
	./cast nan
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 340282346638528859811704183484516925440.000000
	@ echo "$(white)\n******************************\n$(reset)"
	./cast 340283346638528859811704183484516925440.000000
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -340282346638528859811704183484516925440.000000
	@ echo "$(white)\n******************************\n$(reset)"
	./cast -340283346638528859811704183484516925440.000000

clean:
	@ rm -f $(OBJS)
	@ printf '\033[0;32mclean done\033[0m\n'

fclean: clean
	@ rm -f $(NAME)
	@ printf '\033[0;32mfclean done\033[0m\n'

re: fclean
	@ make all

.PHONY: all clean fclean re
