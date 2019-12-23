CC = gcc
FLAGS = -Wall -g

all: isort txtfind

isort: mainIsort.o isort.o
	$(CC) $(FLAGS) -o isort mainIsort.o isort.o 

mainIsort.o: mainIsort.c isort.h
	$(CC) $(FLAGS) -c mainIsort.c 

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 



txtfind: mainTxtfind.o txtfind.o
	$(CC) $(FLAGS) -o txtfind mainTxtfind.o txtfind.o 

mainTxtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c mainTxtfind.c 

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c 



.PHONY: clean all

clean:
	rm -f *.o isort txtfind