#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"movement.h"
#include"player.h"
#include"splash.h"

//gets keystrokes
void keystroke(int level){
	int ch;
	noecho();
	curs_set(0);
  keypad(stdscr, TRUE);

  Player p = addPlayer(20, 10);

  while (1) {
    ch = getch();
    refresh(); 
    if (ch == KEY_UP) {
      p = movePlayer(p, 0, -1, level);
    }
    if (ch == KEY_DOWN) {
      p = movePlayer(p, 0, 1, level);
    }    
    if (ch == KEY_RIGHT) {
      p = movePlayer(p, 1, 0, level);
    }
    if (ch == KEY_LEFT) {
      p = movePlayer(p, -1, 0, level);
    }
    if (ch == 'p') {
      pause_screen();
    }
    if (ch == 'q') {
      quit_screen();
    }
  }
}

       
