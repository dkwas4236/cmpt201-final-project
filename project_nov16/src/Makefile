#authors: ethan, darion lab09 p1
#this is the games inner makefile. the clean function in this makefile only works if you call make using this make fine in the current directory.
#the celan function in the outer makefile will handle cleaning the game when the files have been moved 
CC:= gcc
CFLAGS:= -std=c11 -Wall -lncurses -ltinfo

app: main.o levels.o game_obj.o
	$(CC) $(CFLAGS) $^ -o $@

*.o: *.c
	$(CC) $(CFLAGS) -c $^ 

.PHONY: clean

clean:
	rm *.o app
