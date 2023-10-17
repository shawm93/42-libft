NAME = libft.a
CC = gcc
SRCS_DIR = srcs/
SRCS_FIL = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c \
			ft_isdigit.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_substr.c \
			ft_strjoin.c
			
SRCS := $(addprefix $(SRCS_DIR), $(SRCS_FIL))

HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror -std=c99
OPTION = -I $(HEADER)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

#$(OBJS): $(SRCS)
%.o: %.c
	$(CC) $(CFLAGS) $(OPTION) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re