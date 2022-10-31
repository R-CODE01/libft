CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

FILES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_FILES = \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJCTS = $(FILES:%.c=%.o)
BONUS_OBJCTS = $(BONUS_FILES:%.c=%.o)

.PHONY: clean fclean re all bonus

all: $(NAME)

$(NAME): $(OBJCTS)
	ar rc $(NAME) $(OBJCTS)

%.o: %.c libft.h
	$(CC) -c $(FLAGS) $< -o $@

bonus: $(OBJCTS) $(BONUS_OBJCTS)
	ar rc $(NAME) $(OBJCTS) $(BONUS_OBJCTS)

clean:
	rm -f $(OBJCTS) $(BONUS_OBJCTS)


fclean: clean
	rm -f $(NAME)

re: fclean all
