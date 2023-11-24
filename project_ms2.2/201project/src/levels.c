// name: Darion and Ethan
// lab: AS04
// purpose: contains code for levels

#include <curses.h>
#include <stdio.h>
#include <unistd.h>
#include "levels.h"
#include "game_obj.h"
#include "movement.h"

void display_level(int i) {
  if (i == 1) {
    level1();
  }
  if (i == 2) {
    level2();
  }
  if (i == 3) {
    level3();
  }
}

void level1() {
  createWindow();
  // green box
  struct Block b[2];
  setter1(10,10,1,b);
  // get character
  keystroke(1);
}

void level2() {
  createWindow();
  // green box
  // blue boxes
/*
  struct Block b[9];
	int x[9] = {10,10,11,6,18,8,16,15,3};
	int y[9] = {10,22,14,2,34,18,4,12,37};
	setter2(x[0],y[0],1,b,0);
  for(int i =1; i<9; i++){
    setter2(x[i],y[i],2,b,i);
	}
  // centre mouse
*/
  keystroke(2);
  // get character
  getch();
}

void level3() {
  createWindow();
/*
  // green box
	struct Block b[17];// struct arrray 
	int x[17] = {10,10,11,6,18,8,16,15,3,6,9,12,15,11,4,2,18};
  // all x values 
	int y[17] = {10,22,14,2,34,18,4,12,37,11,34,19,4,31,25,14,15};   // all y value 
	setter2(x[0],y[0],1,b,0);// green box 
  for(int i =1; i<9; i++){
		setter2(x[i],y[i],2,b,i);// blue boxes 
	}
	for(int i =9; i<17;i++){
		setter2(x[i],y[i],3,b,i);// red boxes 
	}
  // centre mouse
*/
  keystroke(3);
  // get character
  getch();
}

