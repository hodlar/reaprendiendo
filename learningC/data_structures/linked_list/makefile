all:
	gcc -c -Wall -Werror -Wextra node.c rb_tree.c
	ar -rcs liblist.a *.o
	gcc main.c -L . -llist -o main

clean:
	rm *.o
	rm *.a
	rm main
