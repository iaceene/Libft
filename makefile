src = ft_atoi.c ft_isalpha.c ft_itoa.c ft_putendl_fd.c  ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_isdigit.c ft_memset.c ft_split.c ft_strjoin.c ft_strncmp.c  ft_substr.c ft_isalnum.c  ft_isprint.c  ft_putchar_fd.c  ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c
obj = $(src:%.c=%.o)
flag = -Wall -Wextra -Werror
ex_flag = -fsanitize=address
main = ./main/main.c

all : out
	@echo "HI"

obj_file :
	@cc $(flag) $(src) $(main) -c

out : obj_file
	@cc $(flag) $(obj) $(main)

clean :
	@rm $(obj) main.o

fclean :
	@rm a.out