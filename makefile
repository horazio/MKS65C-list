all : driver.o list.o
	gcc list.o driver.o

f :
	atom driver.c

run:
	./a.out

driver.o : driver.c
	gcc -c driver.c

list.o : list.c list.h
	gcc -c list.c
