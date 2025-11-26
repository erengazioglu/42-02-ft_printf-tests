CC			= cc
CFLAGS		= -Wall -Werror -Wextra

LIB_DIR		= ../02-ft_printf
LIB_NAME	= libftprintf.a

SRC			= \
			char.c \
			int.c \
			string.c

SRC_BONUS	= \
			int_bonus.c

OBJ = $(SRC:%.c:obj/%.o)
OBJ_BONUS = $(SRC_BONUS:%.c:obj/%.o)


all: 		mandatory bonus

mandatory:	${OBJ} ${LIB_DIR}/${LIB_NAME}
	$(CC) $(CFLAGS) $^ -o $@
#	build main for each obj:

bonus:		${OBJ_BONUS} ${LIB_DIR}/${LIB_NAME}

obj/%.o: %.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@

${LIB_DIR}/${LIB_NAME}:
	make -C $(LIB_DIR)

clean:
	rm -rf obj
fclean: clean

re: fclean all

.PHONY = all clean fclean re mandatory bonus