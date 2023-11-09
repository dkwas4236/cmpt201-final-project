CC:= gcc
CFLAGS:= -std=c11 -Wall -lncurses -ltinfo

app: main.o levels.o game_obj.o
	$(CC) $(CFLAGS) $^ -o $@

*.0: *.c
	$(CC) $(CFLAGS) -c $^ 

.PHONY: clean

clean:
	rm *.o app
