CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_swap.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_strlen.c ${SRCDIR}/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

${SRCDIR}/%.o: ${SRCDIR}/%.c
			${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
