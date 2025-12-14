CC			= cc
CFLAGS		= -Wall -Werror -Wextra -std=c99

LIB_DIR		= ../02-ft_printf
LIB_NAME	= libftprintf.a

TESTS		= \
			char \
			hex \
			pointer
TESTS_BONUS	= \
			int_bonus \
			string_bonus \
			char_bonus \
			hex_bonus
SRC			= \
			main.c
INCLUDE		= include/tests.h

all: mandatory bonus

mandatory:	$(TESTS)
	@for test in $(TESTS); do \
		echo "testing $${test}..."; \
		diff -u --color=always result/$${test}_expected.txt result/$${test}_user.txt 2>&1 || true; \
	done

bonus:		$(TESTS_BONUS)
	@for test in $(TESTS_BONUS); do \
		echo "testing $${test}..."; \
		diff -u --color=always result/$${test}_expected.txt result/$${test}_user.txt 2>&1 || true; \
	done

$(TESTS): %: result/%.diff
$(TESTS_BONUS): %: result/%.diff

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@
obj/%_expected.o: src/%.c $(INCLUDE)
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@
obj/%_user.o: src/%.c $(INCLUDE)
	@mkdir -p obj
	$(CC) $(CFLAGS) -DUSE_CUSTOM -c $< -o $@

bin/%_expected.out: obj/%_expected.o $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	@mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@
bin/%_user.out: obj/%_user.o $(LIB_DIR)/$(LIB_NAME) $(SRC:%.c=obj/%.o)
	@mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

result/%_expected.txt: bin/%_expected.out
	@mkdir -p result
	$^ > $@
result/%_user.txt: bin/%_user.out
	@mkdir -p result
	$^ > $@

result/%.diff: result/%_expected.txt result/%_user.txt
	@diff -u result/$*_expected.txt result/$*_user.txt 2>&1 > $@ || true

${LIB_DIR}/${LIB_NAME}:
	make -C $(LIB_DIR)

clean:
	rm -rf obj
	rm -rf bin
fclean: clean
	rm -rf result
re: fclean all

.PHONY		: all clean fclean re mandatory bonus $(TESTS) $(TESTS_BONUS) $(LIB_DIR)/$(LIB_NAME)
.SILENT		:
.SECONDARY	: