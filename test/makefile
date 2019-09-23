test:main.o fun.o fun2.o fun3.o
	gcc -o test main.o fun.o fun2.o fun3.o
main.o:main.c
	gcc -c main.c
fun.o:fun.c
	gcc -c fun.c
fun2.o:fun2.c
	gcc -c fun2.c
fun3.o:fun3.c
	gcc -c fun3.c
clean:
	rm -f *.o
