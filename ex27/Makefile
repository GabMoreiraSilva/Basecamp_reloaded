NAME = ft_display_file

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_display.c srcs/ft_string.c
OBJS = $(SRCS:srcs/%.c=%.o)
INCS = includes
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS}: ${SRCS}
	${CC} ${CFLAGS} -c ${SRCS} -I ${INCS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re