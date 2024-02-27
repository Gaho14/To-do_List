CC=gcc
CFLAGS = -Wall

all: main

clean:
	rm ../bin/parts/* ../bin/todo_list.exe

main: main.o functions.o
	$(CC) $(CFLAGS) -o ../bin/todo_list.exe ../bin/parts/main.o ../bin/parts/functions.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o ../bin/parts/main.o

functions.o: functions.h
	$(CC) $(CFLAGS) -c functions.c -o ../bin/parts/functions.o