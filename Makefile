#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2014/11/05 19:40:58 by bhenne            #+#    #+#             *#
#*   Updated: 2014/11/09 00:52:49 by bhenne           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft

FILES = ft_putchar ft_putstr ft_putnbr ft_strlen ft_memcpy \
		ft_memchr ft_memset ft_memmove ft_isupper ft_islower ft_isalpha \
		ft_isdigit ft_isascii ft_isalnum ft_isprint ft_toupper ft_tolower \
		ft_strcpy \
		ft_strncpy ft_strcat ft_strncat ft_strlcat ft_bzero \
		ft_memalloc \
		ft_isspace main\

SRC = $(addsuffix .c, $(FILES))

OBJ = $(addsuffix .o, $(FILES))

INC = -I ./

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): comp
	gcc $(FLAGS) $(OBJ) $(INC) -o $(NAME)

comp:
	gcc -c $(FLAGS) $(SRC) $(INC)

lib: comp
	ar rc libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libft.a

re: fclean all
