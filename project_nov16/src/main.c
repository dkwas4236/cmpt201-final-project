//author ethan, darion lab09 p1
//this is the main function for the game. this function calles the splash screen and runs the levels.
#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"levels.h"

int main(){
  splash();//this is the games screen with the instructions
  clear();
  display_level(1); //just the green box
  clear();
  display_level(2); //green box with blue boxes
  clear();
  display_level(3);
  endwin();
  return 0;
}
