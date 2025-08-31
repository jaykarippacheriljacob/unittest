NAME	=	test
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
WRAP_FLAGS = \
	-Wl,--wrap=malloc \
	-Wl,--wrap=free \
	-Wl,--wrap=exit
SRC	=	main.c \
        helper.c \
        strlen/00_str_len_launcher.c \
        launcher_aux.c \
        linked_list_aux.c \
        strlen/01_short_str.c \
        strlen/02_wrong.c \
        strlen/03_empty.c \
        strlen/04_segfault.c \
        strlen/05_longer_str.c \
        functions_to_test/ft_strlen.c \
        dummy/00_dummy_launcher.c \
        dummy/01_buserror.c \
        functions_to_test/ft_atoi.c \
        functions_to_test/ft_itoa.c \
        itoa/00_itoa_launcher.c \
        itoa/01_intmax.c \
        itoa/02_intmin.c \
        itoa/03_negative.c \
        itoa/04_0.c \
        itoa/05_wrong.c \
        atoi/00_atoi_launcher.c \
        atoi/01_maxint_test.c \
        atoi/02_minint_test.c \
        atoi/03_fail_test.c \
        atoi/04_negative_test.c \
        atoi/05_spaces_test.c \
        Garbage_collector/gc_malloc.c \
        Garbage_collector/gc_utils.c
OBJ	=	$(SRC:.c=.o)
PRINTF	=	lib/ft_printf/libftprintf.a
PRINTF_DIR	=	lib/ft_printf

all: $(NAME)
$(PRINTF):
	make	-C	$(PRINTF_DIR)

$(NAME):	$(OBJ)	$(PRINTF)
	$(CC) $(CFLAGS) $(WRAP_FLAGS) -o $(NAME) $(OBJ) $(PRINTF)

clean:
	make	-C	$(PRINTF_DIR) clean
	rm	-f	$(OBJ)
fclean: clean
	make	-C	$(PRINTF_DIR)	fclean
	rm	-f	$(NAME)
re:	fclean all
help:
	@echo "Makefile for $(NAME)"
	@echo "Usage:"
	@echo "  make          Build the project"
	@echo "  make clean    Removes all object files"
	@echo "  make fclean   Removes all object files, executables and the library"
	@echo "  make re       Rebuild the project"
	@echo "  make help     Display this help message"