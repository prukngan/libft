# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prukngan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 17:15:24 by prukngan          #+#    #+#              #
#    Updated: 2023/03/04 17:56:37 by prukngan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_strcmp.c \
			ft_striteri \
			ft_putchar_ fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \

SRCS_BNS	= 	ft_lstnew.c \
	  			ft_lstadd_front.c \
	 	 		ft_lstsize.c \
	  			ft_lstlast.c \
	  			ft_lstadd_back.c \
	  			ft_lstdelone.c \
	  			ft_lstclear.c \
	  			ft_lstiter.c \
	  			ft_lstmap.c

OBJS = &(SRC:.c=.o)

OBJS_BNS = $(SRCS_BNS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME)
	gcc $(FLAGS) -c $(SRCS_BNS) -I./
	ar rc $(NAME) $(OBJS_BNS)

clean:
	rm -f $(OBJS) $(OBJS_BNS)
fclean: clean
	rm -f $(NAME)
re : fclean all

.PHONY: all bonus clean fclean re