##
## Makefile for 102chiffrement in /home/mathon_j/rendu/102chiffrement
## 
## Made by Jeremy Mathon
## Login   <mathon_j@epitech.net>
## 
## Started on  Mon Nov 25 15:37:45 2013 Jeremy Mathon
## Last update Sun Mar  2 15:30:26 2014 Jérémy MATHON
##

SRCS	=		./src/main.c \
			./src/my_putchar.c \
			./src/my_malloc.c \
			./Parser/get_next_line.c \
			./src/check.c \
			./src/valid.c \
			./src/my_map.c \
			./src/my_putstr.c

CC	=		gcc

NAME	=		sudoki-bi

OBJS	=		$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
			$(CC) -O3 -o $(NAME) $(SRCS)
			cp $(NAME) bin/
			rm $(NAME)

clean:
			rm -rvf $(OBJS)

fclean:			clean
			rm -rvf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
