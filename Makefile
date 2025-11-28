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

all: mandatory bonus

mandatory:	$(TESTS)
bonus:		$(TESTS_BONUS)

$(TESTS): $(TESTS:%=result/%_diff.txt)
$(TESTS_BONUS): $(TESTS_BONUS:%=result/%_diff.txt)

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
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@
bin/%_user.out: obj/%_user.o $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

result/%_expected.txt: bin/%_expected.out
	mkdir -p result
	$^ > $@
result/%_user.txt: bin/%_user.out
	mkdir -p result
	$^ > $@

result/%_diff.txt: result/%_expected.txt result/%_user.txt
	diff -u result/$*_expected.txt result/$*_user.txt 2>&1 || true
	touch $@

${LIB_DIR}/${LIB_NAME}:
	make -C $(LIB_DIR)

clean:
	rm -rf obj
	rm -rf bin
fclean: clean
	rm -rf result
re: fclean all

.PHONY = all clean fclean re mandatory bonus $(TESTS) $(TESTS_BONUS)