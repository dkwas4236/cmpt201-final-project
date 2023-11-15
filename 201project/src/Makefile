# name: Darion and Ethan
# lab: AS04
# purpose: Makefile for game

CC:= gcc
CFLAGS:= -Wall -std=c11

orun: main.o levels.o splash.o game_obj.o 
	$(CC) $(CFLAGS) -o orun -ltinfo -lncurses $^

main.o: main.c 
	$(CC) $(CFLAGS) -c -ltinfo -lncurses $<

levels.o: levels.c levels.h 
	$(CC) $(CFLAGS) -c -ltinfo -lncurses $<

splash.o: splash.c splash.h 
	$(CC) $(CFLAGS) -c -ltinfo -lncurses $<

game_obj.o: game_obj.c game_obj.h 
	$(CC) $(CFLAGS) -c -ltinfo -lncurses $<

.PHONY: clean move

clean: 
	rm -f *.o orun

move:
	mv orun ../bin/ 
	mv *.o ../obj/
