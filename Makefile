
all: ayo

ayo: sum.c difference.c product.c division.c test.c funp.h
	gcc sum.c product.c difference.c division.c test.c -o ayo.exe

#clean:
#	del /q *.exe
