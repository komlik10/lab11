# Makefile



CC = gcc

CFLAGS = -Wall -Wextra -pedantic -std=c99 -g

LIBS = -lm



calcul: calculate.o main.o

	$(CC) calculate.o main.o -o calcul $(LIBS)



calculate.o: calculate.c calculate.h

	$(CC) $(CFLAGS) -c calculate.c



main.o: main.c calculate.h

	$(CC) $(CFLAGS) -c main.c



clean:

	rm -rf calcul *.o *~



# End Makefile


