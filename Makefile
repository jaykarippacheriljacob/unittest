# Name of the executable
NAME	=	test
# Compiler and flags
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
# Source files
SRC	=	main.c
# Object files
OBJ	=	$(SRC:.c=.o)
# User-defined library
PRINTF	=	lib/ft_printf/libftprintf.a
# Directories in which the files are present
PRINTF_DIR	=	lib/ft_printf
# Default rule
all: $(NAME)
# Generating user-defined libftprintf library
$(PRINTF):
	make	-C	$(PRINTF_DIR)
# Linking the object files into the final executable
$(NAME):	$(OBJ)	$(PRINTF)
	$(CC)	$(CFLAGS)	-o	$(NAME)	$(OBJ)	$(PRINTF)
# Clean object files
clean:
	make	-C	$(PRINTF_DIR) clean
	rm	-f	$(OBJ)
# Clean everything (objects + executable)
fclean: clean
	make	-C	$(PRINTF_DIR)	fclean
	rm	-f	$(NAME)
#	rm	-rf MLX42
# Rebuild everything
re:	fclean all
# Specify what happens when the Makefile is executed
help:
	@echo "Makefile for $(NAME)"
	@echo "Usage:"
	@echo "  make          Build the project"
	@echo "  make clean    Removes all object files"
	@echo "  make fclean   Removes all object files, executables and the library"
	@echo "  make re       Rebuild the project"
	@echo "  make help     Display this help message"