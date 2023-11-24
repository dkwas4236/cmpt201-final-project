// name: Darion and Ethan
// lab: AS04
// purpose: code for game objects

#include<stdio.h>
#include<curses.h>
#include<unistd.h>
#include"game_obj.h"
/*
struct Block* setter1(int x, int y, int color, struct Block* b){
	rect(x,y,2,color);
	b[0].top=y;
	b[0].bottom = y-2;
	b[0].left = x;
	b[0].right = x+2;     
  //external loop passing the index for setter2
	b[0].color = color;
	return(b);
}
*/	
void setter2(int x, int y, int color, struct Block* b,int idx){
	rect(x,y,2,color);// visual block display 
	b[idx].top=y;// storing position
	b[idx].bottom = y-2;
	b[idx].left = x;
	b[idx].right = x+2;     
	b[idx].color = color;
	b[idx].active=1;
	
}



void pre_setter(int level,struct Block* b){
	if(level ==1){
		setter2(10,10,1,b,0);
		
	}
	if(level==2){
		
        	int x[9] = {10,10,11,6,18,8,16,15,3};
        	int y[9] = {10,22,14,2,34,18,4,12,37};
        	setter2(x[0],y[0],1,b,0);
  		for(int i =1; i<9; i++){
    			setter2(x[i],y[i],2,b,i);
        	}
		
	}

	if(level==3){
		// struct arrray
        	int x[17] = {10,10,11,6,18,8,16,15,3,6,9,12,15,11,4,2,18};
  // all x values
        	int y[17] = {10,22,14,2,34,18,4,12,37,11,34,19,4,31,25,14,15};   // all y value
        	setter2(x[0],y[0],1,b,0);// green box
  		for(int i =1; i<9; i++){
                	setter2(x[i],y[i],2,b,i);// blue boxes
        	}
        	for(int i =9; i<17;i++){
                	setter2(x[i],y[i],2,b,i);// red boxes
        	}

		
	}

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

void rect(int x,int y, int size ,int color){
	start_color();
  // 1=green,2=blue,3=red,4 BLACK
  init_pair(1, COLOR_GREEN, COLOR_GREEN);
  init_pair(2, COLOR_BLUE, COLOR_BLUE);
  init_pair(3, COLOR_RED, COLOR_RED);
  init_pair(4, COLOR_BLACK, COLOR_BLACK);

  // initialize inputted color
	attron(COLOR_PAIR(color));
  // create object
  mvhline(y,x,' ', size);
  // deinitialize inputted color
  attroff(COLOR_PAIR(color));
}

