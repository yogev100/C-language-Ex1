CFLAG=-Wall
CC=gcc
CFLAG=-I.
MATH=myMath.h

all:mains maind basicMath.o power.o mymaths
	$(CC) $(CFLAG) *.o -L. -lmyMath -o Ex1

mains:main.c mymaths
	$(CC) $(CFLAG) -c -o main.o main.c $(CFLAG)

mymaths:basicMath.o power.o 
	ar rcs $@ basicMath.o power.o -o

maind:main.c mymathd
	$(CC) $(CFLAG) -c -o main.o main.c $(CFLAG)

mymathd:basicMath.o power.o
	$(CC) $(CFLAG) -shared basicMath.o power.o -o libmyMath.so

power.o:power.c $(MATH)
	$(CC) $(CFLAG) -c power.c	

basicMath.o:basicMath.c $(MATH)
	$(CC) $(CFLAG) -c basicMath.c

clean:
	rm -f *.o *.so *.a mymaths Ex1
