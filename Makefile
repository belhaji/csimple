algoc 	: main.o algoc.o
	gcc -o algoc main.o algoc.o 
main.o 	: main.c
	gcc -c main.c
algoc.o : algoc.c
	gcc -c algoc.c
clean 	:
	rm *.o
