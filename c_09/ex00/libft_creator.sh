gcc -c -Wall -Wextra -Werror *.c
ar -rc libft.a *.o
ranlib libft.a
rm -f *.o
echo "Library libft.a created successfully"
