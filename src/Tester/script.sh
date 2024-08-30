FILE=$(find ../ -type f -name "*.c")
FLAGS="-Wall -Wextra -Werror"
cc $FLAGS $FILE -c
cc $FLAGS ./main/main.c -c

NAME="output"

FILE_O=$(find . -type f -name "*.o")
cc $FLAGS $FILE_O -o $NAME

rm $FILE_O

./$NAME "yassine" "ajagrou"
