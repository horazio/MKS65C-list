all : list.o driver.o
	gcc list.o driver.o

f :
	atom driver.c

run:
	./a.out

driver.o :
	gcc -c driver.c

list.o : list.c list.h
	gcc -c list.c
