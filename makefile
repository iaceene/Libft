src = $(find . -type f -name "*.c")
flag = -Wall -Wextra -Werror
ex_flag = -fsanitize=address

