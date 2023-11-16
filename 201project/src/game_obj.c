// name: Darion and Ethan
// lab: AS04
// purpose: code for game objects

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"game_obj.h"

void createWindow(){
  // create window
  WINDOW *w;
  w = newwin(20, 40, 0, 0);
  refresh();
  // create border
  wborder(w, '|','|','-','-','+','+', '+', '+'); 
  wrefresh(w);
}

void rect(int x,int y, int size ,int color){
	start_color();
  // 1=green,2=blue,3=red
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  init_pair(3, COLOR_RED, COLOR_RED);
  // initialize inputted color
	attron(COLOR_PAIR(color));
  // create object
  mvhline(x,y,' ', size);
  // deinitialize inputted color
  attroff(COLOR_PAIR(color));
}
