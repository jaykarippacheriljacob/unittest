NAME	=	test
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
SRC	=	main.c \
		strlen/00_str_len_launcher.c \
		launcher_aux.c \
		linked_list_aux.c \
		strlen/01_short_str.c \
		strlen/02_wrong.c \
		strlen/03_empty.c \
		strlen/04_segfault.c \
		strlen/05_longer_str.c \
		functions_to_test/ft_strlen.c
OBJ	=	$(SRC:.c=.o)
PRINTF	=	lib/ft_printf/libftprintf.a
PRINTF_DIR	=	lib/ft_printf

all: $(NAME)
$(PRINTF):
	make	-C	$(PRINTF_DIR)
$(NAME):	$(OBJ)	$(PRINTF)
	$(CC)	$(CFLAGS)	-o	$(NAME)	$(OBJ)	$(PRINTF)

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