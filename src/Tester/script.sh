FILE=$(find ../ -type f -name "*.c")
cc $FILE -c
cc ./main/main.c -c

NAME="output"

FILE_O=$(find . -type f -name "*.o")
cc $FILE_O -o $NAME

rm $FILE_O

./$NAME "yassine" "ajagrou"
