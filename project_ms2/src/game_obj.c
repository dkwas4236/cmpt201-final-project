// name: Darion and Ethan
// lab: AS04
// purpose: code for game objects

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"game_obj.h"

struct Block* setter1(int x, int y, int color, struct Block* b){
	
	
	rect(x,y,2,color);
	b[0].top=y;
	b[0].bottom = y-2;
	b[0].left = x;
	b[0].right = x+2;     //external loop passing the index for setter2
	b[0].color = color;
	return(b);
}
	
void setter2(int x, int y, int color, struct Block* b,int idx){
	
	
	rect(x,y,2,color);// visual block display 
	b[idx].top=y;// storing position
	b[idx].bottom = y-2;
	b[idx].left = x;
	b[idx].right = x+2;     
	b[idx].color = color;
	
}


void createWindow(){
  // create window
  WINDOW *w;
  w = newwin(20, 40, 0, 0);
  refresh();
  // create border
  wborder(w, '|','|','-','-','+','+', '+', '+'); 
  wrefresh(w);
}

void rect(int x,int y, int size ,int color){//loose size
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
