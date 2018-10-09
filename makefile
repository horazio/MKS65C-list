all : driver.o list.o
	gcc driver.o list.o

f :
	emacs driver.c &
	emacs list.c &

run:
	./a.out

driver.o : driver.c
	gcc -c driver.c

list.o : list.c list.h
	gcc -c list.c list.h
