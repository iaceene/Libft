src =	ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_isdigit.c \
		ft_memset.c \
		ft_split.c \
		ft_strjoin.c \
		ft_strncmp.c  \
		ft_substr.c \
		ft_isalnum.c  \
		ft_isprint.c  \
		ft_putchar_fd.c  \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c

CC = cc
FLAG = -Wall -Wextra -Werror
libname = libft

#testing...
EXFLAGS = -fsanitize=address
main = ./main/main.c


all: $(libname).a

$(libname).a: object_files
	@ar -rc $(libname).a $(src:%.c=%.o)

object_files:
	@$(CC) $(FLAG) $(src) -c

clean:
	@rm -f $(src:%.c=%.o)

fclean: clean
	@rm -f $(libname).a

re: fclean all

# Test rules
test: object_files
	@$(CC) $(FLAG) $(EXFLAGS) $(src:%.c=%.o) $(main) -o test_program
	@rm -f $(src:%.c=%.o)
	@echo "program compiled!"

.PHONY: all clean fclean re test