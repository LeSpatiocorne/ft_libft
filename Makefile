NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rcs
RM = rm -f

SRCS =	srcs/base_functions/ft_atoi.c srcs/base_functions/ft_bzero.c srcs/base_functions/ft_memset.c srcs/base_functions/ft_memcpy.c srcs/base_functions/ft_memccpy.c \
		srcs/base_functions/ft_memmove.c srcs/base_functions/ft_memchr.c srcs/base_functions/ft_memcmp.c srcs/base_functions/ft_strlen.c srcs/base_functions/ft_strcmp.c srcs/base_functions/ft_strncmp.c \
		srcs/base_functions/ft_isalpha.c srcs/base_functions/ft_isdigit.c srcs/base_functions/ft_isalnum.c srcs/base_functions/ft_isascii.c srcs/base_functions/ft_isprint.c srcs/base_functions/ft_toupper.c \
		srcs/base_functions/ft_tolower.c srcs/base_functions/ft_strcpy.c srcs/base_functions/ft_strncpy.c srcs/base_functions/ft_strdup.c srcs/base_functions/ft_strcat.c srcs/base_functions/ft_strncat.c \
		srcs/base_functions/ft_strstr.c srcs/base_functions/ft_strchr.c srcs/base_functions/ft_strrchr.c srcs/base_functions/ft_strnstr.c srcs/base_functions/ft_strlcat.c srcs/base_functions/ft_substr.c \
		srcs/base_functions/ft_strjoin.c srcs/base_functions/ft_strtrim.c srcs/base_functions/ft_split.c srcs/base_functions/ft_itoa.c srcs/base_functions/ft_putchar_fd.c srcs/base_functions/ft_putstr_fd.c \
		srcs/base_functions/ft_putendl_fd.c srcs/base_functions/ft_putnbr_fd.c srcs/base_functions/ft_strmapi.c srcs/base_functions/ft_striteri.c srcs/base_functions/ft_calloc.c \
		srcs/base_functions/ft_strlcpy.c srcs/base_functions/ft_putnbr_base_fd.c \
		srcs/get_next_line/get_next_line.c \
		srcs/ft_printf/ft_print_char.c srcs/ft_printf/ft_print_hex.c srcs/ft_printf/ft_print_int.c srcs/ft_printf/ft_printf_ptr.c srcs/ft_printf/ft_print_str.c srcs/ft_printf/ft_print_unsigned.c srcs/ft_printf/ft_printf.c \
		
OBJDIR = objs
OBJSUBDIRS = $(OBJDIR)/srcs/base_functions $(OBJDIR)/srcs/get_next_line
OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

HEADER = $(libft.h)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJSUBDIRS)

$(NAME): $(OBJS)
	@echo "\033[33mCompiling libft\033[0m"
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[32mLibft Successfully Compiled\033[0m"

$(OBJDIR)/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I includes -c $< -o $@

clean:
	@if [ -d $(OBJDIR) ]; then \
		$(RM) -r $(OBJDIR); \
		echo "\033[31mObjects Successfully Removed\033[0m"; \
	else \
		echo "\033[31mObjects are not compiled nothing to remove.\033[0m"; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		$(RM) $(NAME); \
		echo "\033[31mLibft Successfully Removed\033[0m"; \
	else \
		echo "\033[31mLibft is not compiled nothing to remove.\033[0m"; \
	fi

re: fclean all

.PHONY: all clean fclean re
