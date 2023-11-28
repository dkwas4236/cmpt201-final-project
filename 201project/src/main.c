// name: Darion and Ethan
// lab: AS04
// purpose: main code to run game

#include<curses.h>
#include<stdio.h>
#include<unistd.h>
#include"splash.h"
#include"levels.h"
#include"game_obj.h"
#include"movement.h"

int main(){
  noecho();
  // splash screen with instructions and title
  splash();
  // clear splash 
  clear();
  // init start of game
  display_level(1); 
  endwin();
  return 0;
}


