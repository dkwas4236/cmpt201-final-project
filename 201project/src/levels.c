// name: Darion and Ethan
// lab: AS04
// purpose: contains code for levels

#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"levels.h"
#include"game_obj.h"

void display_level(int i){
  if(i==1){
    level1();
  }
  if(i==2){
    level2();
  }
  if(i==3){
    level3();
  }
}

void level1(){
  createWindow();
  //green box
	rect(10,10,2,1);
  //centre mouse
  move(10,20);
  //get character
  getch();
}

void level2(){
  createWindow();
  //green box 
	rect(10,10,2,1);
  //blue boxes 
	rect(10,22,2,2),rect(11,14,2,2),rect(6,2,2,2),rect(18,34,2,2);
	rect(8,18,2,2),rect(16,4,2,2),rect(15,12,2,2),rect(3,37,2,2);
  //centre mouse
  move(10,20);
  //get character
  getch();
}

void level3(){
  createWindow();
  //green box 
	rect(10,10,2,1);
  //blue boxes 
	rect(10,22,2,2),rect(11,14,2,2),rect(6,2,2,2),rect(18,34,2,2);
	rect(8,18,2,2),rect(16,4,2,2),rect(15,12,2,2),rect(3,37,2,2);
  //red boxes 
	rect(6,11,2,3),rect(9,34,2,3),rect(12,19,2,3),rect(15,4,2,3);
	rect(11,31,2,3),rect(4,25,2,3),rect(2,14,2,3),rect(18,15,2,3);
  //centre mouse
  move(10,20);
  //get character
  getch();
}
