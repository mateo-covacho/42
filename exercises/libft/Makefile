NAME = libft.a
BONUS_NAME = .bonus

MAIN_FILENAMES =       ft_atoi.c   ft_isalnum.c  ft_isdigit.c  ft_memcmp.c \
ft_memset.c  ft_strlcat.c  ft_strncmp.c  ft_tolower.c \
ft_bzero.c  ft_isalpha.c  ft_isprint.c  ft_memcpy.c \
ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  ft_toupper.c \
ft_calloc.c  ft_isascii.c  ft_memchr.c  ft_memmove.c \
ft_strdup.c  ft_strlen.c  ft_strrchr.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c


OBJECTS = $(MAIN_FILENAMES:.c=.o)

BONUS_FILENAMES =		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
				
BONUS_OBJS_FILENAMES = $(BONUS_FILENAMES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CC = cc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_NAME)

clean:
	$(REMOVE) $(OBJECTS) $(BONUS_OBJS_FILENAMES)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME) 

re: fclean all

$(BONUS_NAME): $(OBJECTS) $(BONUS_OBJS_FILENAMES)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS_FILENAMES)
	ar rcs $(BONUS_NAME) $(OBJECTS) $(BONUS_OBJS_FILENAMES)

.PHONY: all clean fclean re
