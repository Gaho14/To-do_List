CC=gcc
CFLAGS = -Wall

all: main

clean:
	rm ../bin/parts/* ../bin/todo_list.exe

main: main.o functions.o cjson.o
	$(CC) $(CFLAGS) -o ../bin/todo_list.exe ../bin/parts/main.o ../bin/parts/functions.o ../bin/parts/cJSON.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o ../bin/parts/main.o

functions.o: functions.h
	$(CC) $(CFLAGS) -c functions.c -o ../bin/parts/functions.o

cjson.o: ./lib/cJSON.h
	$(CC) $(CFLAGS) -c ./lib/cJSON.c -o ../bin/parts/cJSON.o