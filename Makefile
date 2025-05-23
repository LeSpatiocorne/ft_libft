NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rcs
RM = rm -f

SRCS = ft_atoi.c \
ft_bzero.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
		ft_strlen.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_calloc.c \
		ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

HEADER = $(libft.h)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
