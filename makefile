all : list.o
	gcc list.o

f :
	emacs driver.c &
	emacs list.c &

run:
	./a.out

driver.o : driver.o
	gcc -c driver.c

list.o : list.c list.h
	gcc -c list.c
