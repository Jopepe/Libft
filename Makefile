# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 12:03:21 by jnunez-h          #+#    #+#              #
#    Updated: 2022/02/21 12:03:21 by jnunez-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Funciones			=	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcpy.c \
		ft_atoi.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c

OB					=	$(Funciones:.c=.o)

C					=	gcc

FLAGS				=	-Wall -Wextra -Werror

NAME				=	libft.a

all:				$(NAME)

$(NAME):			$(OB)
						ar rcs $(NAME) $(OB)

clean:
						rm -f $(NAME) $(OB) $(OB_bonus)

fclean:				clean
						rm -f $(NAME) $(OB) $(OB_Bonus)

re:					fclean ${NAME}

bonus:				$(OB)
						ar rcs $(NAME) $(OB)
						
.PHONY: all clean fclean re bonus