INPUT=$1
name=(${INPUT//./ })
clang-format -i $name.c
gcc -Wall -Werror -Wextra $INPUT -o $name.out
./$name.out
