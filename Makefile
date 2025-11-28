CC			= cc
CFLAGS		= -Wall -Werror -Wextra -std=c99

LIB_DIR		= ../02-ft_printf
LIB_NAME	= libftprintf.a

TESTS		= \
			char \
			int \
			string
TESTS_BONUS	= \
			int_bonus
SRC			= \
			main.c
INCLUDE		= include/tests.h

OBJ			:= $(TESTS:%=obj/%.o)
OBJ_BONUS	:= $(TESTS_BONUS:%=obj/%.o)

all: mandatory bonus

mandatory:	$(TESTS)
bonus:		$(TESTS_BONUS)

$(TESTS): $(TESTS:%=obj/%.o) $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	mkdir -p bin result
	$(CC) $(CFLAGS) $^ -o bin/expected.out
	bin/expected.out > result/expected.txt
	$(CC) $(CFLAGS) -DUSE_CUSTOM $^ -o bin/user.out
	bin/user.out > result/user.txt

$(TESTS_BONUS): $(TESTS_BONUS:%=result/%_expected.txt) $(TESTS_BONUS:%=result/%_user.txt)
	mkdir -p bin result
	
# 	$(CC) $(CFLAGS) -c src/$@.c -o obj/$@_expected.o
# 	$(CC) $(CFLAGS) $(SRC:%.c=obj/%.o) obj/$@_expected.o $^ obj -o bin/$@_expected.out
# 	bin/$@_expected.out > result/$@_expected.txt
# 	$(CC) $(CFLAGS) -DUSE_CUSTOM -c src/$@.c -o obj/$@_user.o
# 	$(CC) $(CFLAGS) $(SRC:%.c=obj/%.o) obj/$@_user.o $^ obj -o bin/$@_user.out
# 	bin/user.out > result/user.txt

obj/%.o: src/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@

obj/%_expected.o: src/%.c $(INCLUDE)
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@
obj/%_user.o: src/%.c $(INCLUDE)
	mkdir -p obj
	$(CC) $(CFLAGS) -DUSE_CUSTOM -c $< -o $@
bin/%_expected.out: obj/%_expected.o $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	$(CC) $(CFLAGS) $^ -o $@
bin/%_user.out: obj/%_user.o $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	$(CC) $(CFLAGS) $^ -o $@
result/%_expected.txt: bin/%_user.out
	$^ > $@
result/%_user.txt: bin/%_user.out
	$^ > $@
# OBJ = $(SRC:%.c:obj/%.o)
# OBJ_BONUS = $(SRC_BONUS:%.c:obj/%.o)


# all: 		mandatory bonus

# mandatory:	${OBJ} ${LIB_DIR}/${LIB_NAME}
# 	$(CC) $(CFLAGS) $^ -o $@
# #	build main for each obj:

# bonus:		${OBJ_BONUS} ${LIB_DIR}/${LIB_NAME}

# obj/%.o: %.c
# 	mkdir -p obj
# 	$(CC) $(CFLAGS) -c $^ -o $@

${LIB_DIR}/${LIB_NAME}:
	make -C $(LIB_DIR)

clean:
	rm -rf obj
	rm -rf bin
fclean: clean
	rm -rf result

re: fclean all

.PHONY = all clean fclean re mandatory bonus $(TESTS) $(TESTS_BONUS)