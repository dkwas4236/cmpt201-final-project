#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"game_obj.h"

//creates window
void createWindow(){
  WINDOW *w;
  w = newwin(20, 40, 0, 0);
  refresh();
  wborder(w, '|','|','-','-','+','+', '+', '+'); 
  wrefresh(w);
}

//creates blocks
void blocks(int x, int y, int size ,int color){
	start_color();
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  init_pair(3, COLOR_RED, COLOR_RED);
	attron(COLOR_PAIR(color));
  mvhline(x, y, ' ', size);
  attroff(COLOR_PAIR(color));
}
