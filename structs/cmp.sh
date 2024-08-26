FILE=$(find ./src/ -type f -name "*.c")
cc $FILE -c

FILE_O=$(find . -type f -name "*.o")
cc $FILE_O -o output

rm $FILE_O

./output 10
